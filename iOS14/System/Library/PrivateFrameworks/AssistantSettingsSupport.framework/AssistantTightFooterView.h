/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <AssistantSettingsSupport/AssistantSettingsSupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, NSString;

@interface AssistantTightFooterView : UIView <PSHeaderFooterView> {

	UILabel* _textLabel;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text; 
-(void)setText:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(UIEdgeInsets)textInsets;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)_formatText;
@end

