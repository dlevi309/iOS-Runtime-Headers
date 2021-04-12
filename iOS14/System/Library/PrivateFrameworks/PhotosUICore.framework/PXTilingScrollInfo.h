/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXTilingScrollInfo : NSObject <NSCopying> {

	BOOL _pagingEnabled;
	unsigned long long _axis;
	CGSize _interpageSpacing;
	CGPoint _pagingOrigin;

}

@property (assign,nonatomic) unsigned long long axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) BOOL pagingEnabled;              //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacing;                                //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (assign,nonatomic) CGPoint pagingOrigin;                                   //@synthesize pagingOrigin=_pagingOrigin - In the implementation block
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(void)setPagingOrigin:(CGPoint)arg1 ;
-(CGPoint)pagingOrigin;
-(BOOL)isPagingEnabled;
-(CGSize)interpageSpacing;
-(unsigned long long)hash;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(void)setInterpageSpacing:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

