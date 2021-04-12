/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying> {

	BOOL _scrollViewPagingEnabled;
	BOOL _interpolatesDuringSwipeToKill;
	double _decelerationRate;
	unsigned long long _scrollAxis;
	CGSize _contentSize;
	CGSize _interpageSpacingForPaging;
	CGPoint _pagingOrigin;

}

@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double decelerationRate;                         //@synthesize decelerationRate=_decelerationRate - In the implementation block
@property (assign,nonatomic) BOOL scrollViewPagingEnabled;                    //@synthesize scrollViewPagingEnabled=_scrollViewPagingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long scrollAxis;                   //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacingForPaging;                //@synthesize interpageSpacingForPaging=_interpageSpacingForPaging - In the implementation block
@property (assign,nonatomic) CGPoint pagingOrigin;                            //@synthesize pagingOrigin=_pagingOrigin - In the implementation block
@property (assign,nonatomic) BOOL interpolatesDuringSwipeToKill;              //@synthesize interpolatesDuringSwipeToKill=_interpolatesDuringSwipeToKill - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)scrollAxis;
-(id)_copyWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setPagingOrigin:(CGPoint)arg1 ;
-(CGPoint)pagingOrigin;
-(void)setDecelerationRate:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)decelerationRate;
-(BOOL)scrollViewPagingEnabled;
-(CGSize)interpageSpacingForPaging;
-(BOOL)interpolatesDuringSwipeToKill;
-(void)setScrollViewPagingEnabled:(BOOL)arg1 ;
-(void)setInterpageSpacingForPaging:(CGSize)arg1 ;
-(void)setInterpolatesDuringSwipeToKill:(BOOL)arg1 ;
@end

