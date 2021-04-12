/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMapTable;

@interface HDIdentifierTable : NSObject {

	NSMapTable* _map;
	unsigned long long _nextIdentifier;

}

@property (nonatomic,retain) NSMapTable * map;                               //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) unsigned long long nextIdentifier;              //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(unsigned long long)count;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)allObjects;
-(NSMapTable *)map;
-(void)setMap:(NSMapTable *)arg1 ;
-(unsigned long long)nextIdentifier;
-(void)setNextIdentifier:(unsigned long long)arg1 ;
-(void)removeObjectWithIdentifier:(unsigned long long)arg1 ;
-(id)objectWithIdentifier:(unsigned long long)arg1 ;
@end

