/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXTileZoomAnimationOptions : NSObject <NSCopying> {

	BOOL _shouldCrossfade;
	long long _transformType;
	unsigned long long _flags;

}

@property (assign,nonatomic) long long transformType;               //@synthesize transformType=_transformType - In the implementation block
@property (assign,nonatomic) BOOL shouldCrossfade;                  //@synthesize shouldCrossfade=_shouldCrossfade - In the implementation block
@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
-(BOOL)shouldCrossfade;
-(id)init;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(long long)transformType;
-(unsigned long long)flags;
-(void)setTransformType:(long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

