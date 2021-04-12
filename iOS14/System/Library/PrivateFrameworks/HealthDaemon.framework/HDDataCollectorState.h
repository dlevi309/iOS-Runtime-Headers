/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)sourceType;
-(id)init;
-(void)setSourceType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

