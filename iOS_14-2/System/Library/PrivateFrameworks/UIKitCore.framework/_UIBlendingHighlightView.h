/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_blendingSeparatorView;
+(id)_blendingPressedView;
-(id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(UIEdgeInsets)_effectiveNonDirectionalContentInsets;
-(void)_enumerateAllBlendingViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBlendingBorderViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

