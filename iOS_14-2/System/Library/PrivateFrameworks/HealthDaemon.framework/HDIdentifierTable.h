/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMapTable;

@interface HDIdentifierTable : NSObject {

	NSMapTable* _map;
	unsigned long long _nextIdentifier;

}

@property (nonatomic,retain) NSMapTable * map;                               //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) unsigned long long nextIdentifier;              //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(void)setMap:(NSMapTable *)arg1 ;
-(unsigned long long)nextIdentifier;
-(unsigned long long)count;
-(void)setNextIdentifier:(unsigned long long)arg1 ;
-(id)allObjects;
-(unsigned long long)addObject:(id)arg1 ;
-(NSMapTable *)map;
-(void)removeAllObjects;
-(void)removeObjectWithIdentifier:(unsigned long long)arg1 ;
-(id)objectWithIdentifier:(unsigned long long)arg1 ;
@end

