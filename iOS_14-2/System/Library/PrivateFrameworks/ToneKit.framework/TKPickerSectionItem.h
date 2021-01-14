/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setText:(id)arg1 ;
-(NSString *)text;
-(NSString *)footerText;
-(void)_setFooterText:(id)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

