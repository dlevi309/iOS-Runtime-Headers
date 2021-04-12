/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface VUICollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _heterogeneous;

}

@property (assign,getter=isHeterogeneous,nonatomic) BOOL heterogeneous;              //@synthesize heterogeneous=_heterogeneous - In the implementation block
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(long long)developmentLayoutDirection;
-(BOOL)isHeterogeneous;
-(double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2 ;
-(void)setHeterogeneous:(BOOL)arg1 ;
@end

