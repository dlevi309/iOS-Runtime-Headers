/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUControllableCollectionViewLayoutOverrideAttributes : NSObject {

	long long _zIndex;
	double _alpha;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) long long zIndex;                         //@synthesize zIndex=_zIndex - In the implementation block
@property (assign,nonatomic) double alpha;                             //@synthesize alpha=_alpha - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(double)alpha;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
@end

