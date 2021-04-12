/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

