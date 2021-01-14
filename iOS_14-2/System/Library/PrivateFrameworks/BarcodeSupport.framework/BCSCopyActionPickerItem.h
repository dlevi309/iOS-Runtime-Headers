/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

@interface BCSCopyActionPickerItem : BCSActionPickerItem {

	NSString* _textToCopy;

}

@property (nonatomic,copy,readonly) NSString * textToCopy;              //@synthesize textToCopy=_textToCopy - In the implementation block
-(void)performAction;
-(id)icon;
-(BOOL)isCopyActionItem;
-(id)initWithAction:(id)arg1 textToCopy:(id)arg2 ;
-(NSString *)textToCopy;
@end

