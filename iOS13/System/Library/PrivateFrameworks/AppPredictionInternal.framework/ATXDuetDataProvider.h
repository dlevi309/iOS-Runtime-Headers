/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray;

@interface ATXDuetDataProvider : NSObject {

	NSArray* _streamData;

}

@property (nonatomic,readonly) NSArray * streamData;              //@synthesize streamData=_streamData - In the implementation block
+(Class)supportedDuetEventClass;
+(long long)supportedCoreDuetStream;
+(id)duetHelperStreamTypeToDuetEventStream:(long long)arg1 ;
-(id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 ;
-(id)fetchEventIdentifierCountsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 ;
-(id)filteredEventsWithPredicate:(id)arg1 ;
-(void)tagEventsWithLocationsFromLocationVisitsArray:(id)arg1 ;
-(id)getUniqueValuesForPropertyKey:(id)arg1 ;
-(NSArray *)streamData;
@end

