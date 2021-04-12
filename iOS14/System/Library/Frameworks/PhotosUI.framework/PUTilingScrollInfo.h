/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@interface PUTilingScrollInfo : NSObject {

	BOOL _shouldEnablePaging;
	long long _scrollDirections;
	double _pagingSpringPullAdjustment;
	double _pagingFrictionAdjustment;
	CGSize _interpageSpacing;

}

@property (assign,setter=_setScrollDirections:,nonatomic) long long scrollDirections;                               //@synthesize scrollDirections=_scrollDirections - In the implementation block
@property (assign,setter=_setShouldEnablePaging:,nonatomic) BOOL shouldEnablePaging;                                //@synthesize shouldEnablePaging=_shouldEnablePaging - In the implementation block
@property (assign,setter=_setInterpageSpacing:,nonatomic) CGSize interpageSpacing;                                  //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (assign,setter=_setPagingSpringPullAdjustment:,nonatomic) double pagingSpringPullAdjustment;              //@synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment - In the implementation block
@property (assign,setter=_setPagingFrictionAdjustment:,nonatomic) double pagingFrictionAdjustment;                  //@synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment - In the implementation block
+(id)scrollInfoWithScrollDirections:(long long)arg1 ;
+(id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(CGSize)arg2 ;
+(id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(CGSize)arg2 pagingSpringPullAdjustment:(double)arg3 pagingFrictionAdjustment:(double)arg4 ;
-(void)_setInterpageSpacing:(CGSize)arg1 ;
-(double)pagingSpringPullAdjustment;
-(long long)scrollDirections;
-(void)_setShouldEnablePaging:(BOOL)arg1 ;
-(void)_setScrollDirections:(long long)arg1 ;
-(CGSize)interpageSpacing;
-(void)_setPagingFrictionAdjustment:(double)arg1 ;
-(double)pagingFrictionAdjustment;
-(BOOL)shouldEnablePaging;
-(void)_setPagingSpringPullAdjustment:(double)arg1 ;
@end

