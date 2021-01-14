/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSMutableArray, UIWindow;

@interface SKUIStackView : UIView {

	UIImage* _image;
	NSMutableArray* _stackViews;
	long long _stackViewStyle;
	UIWindow* _window;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) long long stackViewStyle;              //@synthesize stackViewStyle=_stackViewStyle - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(long long)stackViewStyle;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_stackDepth;
-(id)_initSKUIStackView;
-(CGSize)_sizeOfItemAtIndex:(double)arg1 ;
-(UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(CGPoint)arg2 ;
-(CGPoint)_centerInPerspectiveTargetViewCoordinates;
-(CGSize)_levelInsetSize;
-(CGSize)_normalizedDistanceFromVanishingPointForCenter:(CGPoint)arg1 perspectiveTargetView:(id)arg2 ;
-(UIOffset)_relativeOffsetForMinimumRelativeOffset:(UIOffset)arg1 maximumRelativeOffset:(UIOffset)arg2 normalizedDistanceFromVanishingPoint:(CGSize)arg3 ;
-(id)initWithStackViewStyle:(long long)arg1 ;
@end

