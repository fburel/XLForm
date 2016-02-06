//
//  XLForm.h
//  XLForm
//
//  Created by Michael Emmons on 2/6/16.
//  Copyright © 2016 XmartLabs. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for XLForm.
FOUNDATION_EXPORT double XLFormVersionNumber;

//! Project version string for XLForm.
FOUNDATION_EXPORT const unsigned char XLFormVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <XLForm/PublicHeader.h>

//Descriptors
#import "XLFormDescriptor.h"
#import "XLFormSectionDescriptor.h"
#import "XLFormRowDescriptor.h"

// Categories
#import "NSObject+XLFormAdditions.h"

//helpers
#import "XLFormOptionsObject.h"

//Controllers
#import "XLFormOptionsViewController.h"
#import "XLFormViewController.h"

//Protocols
#import "XLFormDescriptorCell.h"
#import "XLFormInlineRowDescriptorCell.h"
#import "XLFormRowDescriptorViewController.h"

//Cells
#import "XLFormBaseCell.h"
#import "XLFormInlineSelectorCell.h"
#import "XLFormTextFieldCell.h"
#import "XLFormTextViewCell.h"
#import "XLFormSelectorCell.h"
#import "XLFormDatePickerCell.h"
#import "XLFormButtonCell.h"
#import "XLFormSwitchCell.h"
#import "XLFormCheckCell.h"
#import "XLFormDatePickerCell.h"
#import "XLFormPickerCell.h"
#import "XLFormLeftRightSelectorCell.h"
#import "XLFormDateCell.h"
#import "XLFormStepCounterCell.h"
#import "XLFormSegmentedCell.h"
#import "XLFormSliderCell.h"

//Validation
#import "XLFormRegexValidator.h"

