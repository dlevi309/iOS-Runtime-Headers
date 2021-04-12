/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableDictionary, NSString;

@interface _DKEventStatsCollection : NSObject {

	NSMutableDictionary* _eventCounterStats;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)collectionWithName:(id)arg1 ;
+(id)allEventStatsCollections;
+(id)counterWithClass:(Class)arg1 collectionName:(id)arg2 eventName:(id)arg3 eventType:(id)arg4 eventTypePossibleValues:(id)arg5 hasResult:(BOOL)arg6 scalar:(BOOL)arg7 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)eventStatsCounterWithKey:(id)arg1 ;
-(void)addEventStatsCounter:(id)arg1 withKey:(id)arg2 ;
-(id)allEventStatsCounters;
@end

