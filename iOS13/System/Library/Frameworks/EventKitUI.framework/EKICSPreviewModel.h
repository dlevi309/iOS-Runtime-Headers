/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)allEvents;
-(EKEventStore *)eventStore;
-(unsigned long long)actionsState;
-(unsigned long long)totalEventCount;
-(unsigned long long)unimportedEventCount;
-(NSArray *)importedEvents;
-(BOOL)shouldUpdate;
-(id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)importedEventCount;
-(NSArray *)unimportedEvents;
-(id)importEvent:(id)arg1 intoCalendar:(id)arg2 ;
-(id)importAllIntoCalendar:(id)arg1 ;
@end

