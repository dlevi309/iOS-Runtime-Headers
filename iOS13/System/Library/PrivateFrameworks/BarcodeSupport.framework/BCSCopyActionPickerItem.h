/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

@interface BCSCopyActionPickerItem : BCSActionPickerItem {

	NSString* _textToCopy;

}

@property (nonatomic,copy,readonly) NSString * textToCopy;              //@synthesize textToCopy=_textToCopy - In the implementation block
-(void)performAction;
-(BOOL)isCopyActionItem;
-(id)initWithAction:(id)arg1 textToCopy:(id)arg2 ;
-(NSString *)textToCopy;
@end

