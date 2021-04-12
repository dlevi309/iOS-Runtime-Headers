/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class NSMutableArray, NSString;

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	NSMutableArray* _blendingViews;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBorderView;
+(id)_blendingPressedView;
+(id)_blendingSeparatorView;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3 ;
-(id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2 ;
-(double)cornerRadius;
-(UIEdgeInsets)_effectiveNonDirectionalContentInsets;
-(void)_enumerateAllBlendingViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBlendingBorderViewsWithBlock:(/*^block*/id)arg1 ;
@end

