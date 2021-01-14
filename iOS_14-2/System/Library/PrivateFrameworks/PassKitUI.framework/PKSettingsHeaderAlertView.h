/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UITextView, NSString;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView> {

	UITextView* _textView;
	NSString* _headerText;
	NSString* _descriptionText;

}

@property (nonatomic,retain) NSString * headerText;                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)headerText;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

