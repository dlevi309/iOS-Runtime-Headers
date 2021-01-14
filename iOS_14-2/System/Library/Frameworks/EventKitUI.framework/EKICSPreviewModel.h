/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSData, EKEventStore, NSMutableArray, NSArray;

@interface EKICSPreviewModel : NSObject {

	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
	unsigned long long _options;
	unsigned long long _actionsState;
	BOOL _shouldUpdate;

}

@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) unsigned long long totalEventCount; 
@property (nonatomic,readonly) unsigned long long importedEventCount; 
@property (nonatomic,readonly) unsigned long long unimportedEventCount; 
@property (nonatomic,readonly) unsigned long long actionsState; 
@property (nonatomic,readonly) NSArray * importedEvents; 
@property (nonatomic,readonly) NSArray * unimportedEvents; 
@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) BOOL shouldUpdate;                                    //@synthesize shouldUpdate=_shouldUpdate - In the implementation block
-(EKEventStore *)eventStore;
-(unsigned long long)totalEventCount;
-(unsigned long long)unimportedEventCount;
-(NSArray *)importedEvents;
-(BOOL)shouldUpdate;
-(id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)importedEventCount;
-(NSArray *)unimportedEvents;
-(id)importEvent:(id)arg1 intoCalendar:(id)arg2 ;
-(id)importAllIntoCalendar:(id)arg1 ;
-(unsigned long long)actionsState;
-(NSArray *)allEvents;
@end

