/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKPickerItem.h>

@class NSString;

@interface TKPickerSectionItem : TKPickerItem {

	NSString* _text;
	NSString* _footerText;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (setter=_setFooterText:,nonatomic,copy) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(NSString *)footerText;
-(void)_setFooterText:(id)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

