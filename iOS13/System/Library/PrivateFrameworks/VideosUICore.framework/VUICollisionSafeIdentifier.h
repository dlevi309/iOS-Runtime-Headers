/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject;

@interface VUICollisionSafeIdentifier : NSObject <NSCopying> {

	NSObject*<NSCopying> _rootIdentifier;
	unsigned long long _collisionCount;

}

@property (nonatomic,copy) NSObject*<NSCopying> rootIdentifier;              //@synthesize rootIdentifier=_rootIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long collisionCount;              //@synthesize collisionCount=_collisionCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)collisionCount;
-(NSObject*<NSCopying>)rootIdentifier;
-(id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2 ;
-(void)setRootIdentifier:(NSObject*<NSCopying>)arg1 ;
-(void)setCollisionCount:(unsigned long long)arg1 ;
@end

