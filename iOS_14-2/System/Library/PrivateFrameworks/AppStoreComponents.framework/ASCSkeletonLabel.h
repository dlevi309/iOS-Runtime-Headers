/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIColor, ASCContentSkeleton;

@interface ASCSkeletonLabel : UILabel {

	BOOL _wantsAncesterFocusMarqueeAfterClearingSkeleton;
	UIColor* _skeletonColor;
	ASCContentSkeleton* _skeleton;

}

@property (nonatomic,readonly) long long effectiveSkeletonAlignment; 
@property (assign,nonatomic) BOOL wantsAncesterFocusMarqueeAfterClearingSkeleton;              //@synthesize wantsAncesterFocusMarqueeAfterClearingSkeleton=_wantsAncesterFocusMarqueeAfterClearingSkeleton - In the implementation block
@property (nonatomic,copy) UIColor * skeletonColor;                                            //@synthesize skeletonColor=_skeletonColor - In the implementation block
@property (nonatomic,copy) ASCContentSkeleton * skeleton;                                      //@synthesize skeleton=_skeleton - In the implementation block
-(ASCContentSkeleton *)skeleton;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_baselineOffsetFromBottom;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_firstBaselineOffsetFromTop;
-(void)setSkeleton:(ASCContentSkeleton *)arg1 ;
-(long long)effectiveSkeletonAlignment;
-(CGRect)skeletonRectForBounds:(CGRect)arg1 ;
-(UIColor *)skeletonColor;
-(void)drawSkeletonInRect:(CGRect)arg1 ;
-(void)setSkeletonColor:(UIColor *)arg1 ;
-(BOOL)wantsAncesterFocusMarqueeAfterClearingSkeleton;
-(void)setWantsAncesterFocusMarqueeAfterClearingSkeleton:(BOOL)arg1 ;
@end

