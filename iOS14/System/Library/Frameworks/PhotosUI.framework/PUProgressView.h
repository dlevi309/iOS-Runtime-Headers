/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface PUProgressView : UIView {

	UIActivityIndicatorView* _spinner;
	long long _style;

}

@property (readonly) long long style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
@end

