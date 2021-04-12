/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectorState : NSObject <NSCopying> {

	unsigned long long _collectionType;
	unsigned long long _sourceType;
	long long _priority;

}

@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceType;                  //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) long long priority;                             //@synthesize priority=_priority - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
@end

