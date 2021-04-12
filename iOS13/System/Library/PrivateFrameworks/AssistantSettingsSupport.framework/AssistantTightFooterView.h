/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(UIEdgeInsets)textInsets;
-(void)_formatText;
@end

