/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGEntity, SGCuratedEventKey, NSString;

@interface SGRealtimeEventResponse : NSObject {

	int _state;
	SGEntity* _entity;
	SGCuratedEventKey* _duplicateEventKey;
	NSString* _templateShortName;

}

@property (nonatomic,readonly) int state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGEntity * entity;                                  //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) SGCuratedEventKey * duplicateEventKey;              //@synthesize duplicateEventKey=_duplicateEventKey - In the implementation block
@property (nonatomic,readonly) NSString * templateShortName;                       //@synthesize templateShortName=_templateShortName - In the implementation block
-(SGEntity *)entity;
-(int)state;
-(NSString *)templateShortName;
-(id)initWithEntity:(id)arg1 state:(int)arg2 duplicateEventKey:(id)arg3 templateShortName:(id)arg4 ;
-(id)initNewEventWithEntity:(id)arg1 ;
-(id)initDuplicateOfCuratedEvent:(id)arg1 withEntity:(id)arg2 ;
-(id)initUpdatedEventWithEntity:(id)arg1 curatedEventKey:(id)arg2 ;
-(id)initCancellationOfCuratedEvent:(id)arg1 templateShortName:(id)arg2 entity:(id)arg3 ;
-(SGCuratedEventKey *)duplicateEventKey;
@end

