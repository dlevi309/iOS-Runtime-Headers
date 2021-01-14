/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface _TVRMatchPointArtworkView : UIView {

	UIView* _selectIndicator;
	UIImageView* _upImageView;
	UIImageView* _rightImageView;
	UIImageView* _downImageView;
	UIImageView* _leftImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)highlightForButtonType:(long long)arg1 enabled:(BOOL)arg2 ;
-(BOOL)touchLocationIsConsideredCenter:(CGPoint)arg1 ;
@end

