/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTintColor:(id)arg1 ;
-(NSLayoutXAxisAnchor *)horizontalLineRightAnchor;
-(UIImage *)horizontalLineImage;
-(UIImageView *)horizontalLine;
-(UILabel *)label;
@end

