/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutXAxisAnchor, UIImageView, UIImage;

@interface STHorizontalDivider : UIView {

	UILabel* _label;
	NSLayoutXAxisAnchor* _horizontalLineRightAnchor;
	UIImageView* _horizontalLine;

}

@property (readonly) UIImageView * horizontalLine;                                 //@synthesize horizontalLine=_horizontalLine - In the implementation block
@property (readonly) UIImage * horizontalLineImage; 
@property (readonly) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * horizontalLineRightAnchor;              //@synthesize horizontalLineRightAnchor=_horizontalLineRightAnchor - In the implementation block
-(UILabel *)label;
-(id)initWithTintColor:(id)arg1 ;
-(UIImage *)horizontalLineImage;
-(NSLayoutXAxisAnchor *)horizontalLineRightAnchor;
-(UIImageView *)horizontalLine;
@end

