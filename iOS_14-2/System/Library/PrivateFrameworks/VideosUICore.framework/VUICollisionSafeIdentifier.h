/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)collisionCount;
-(NSObject*<NSCopying>)rootIdentifier;
-(id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2 ;
-(void)setRootIdentifier:(NSObject*<NSCopying>)arg1 ;
-(void)setCollisionCount:(unsigned long long)arg1 ;
@end

