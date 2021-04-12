/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _heterogeneous;

}

@property (assign,getter=isHeterogeneous,nonatomic) BOOL heterogeneous;              //@synthesize heterogeneous=_heterogeneous - In the implementation block
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(long long)developmentLayoutDirection;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)isHeterogeneous;
-(void)setHeterogeneous:(BOOL)arg1 ;
-(double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2 ;
@end

