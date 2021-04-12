/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NTKMonogramTimelineEntryModel, NSString;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {

	NTKMonogramTimelineEntryModel* _currentEntry;
	NSString* _monogramText;
	BOOL _listeningForMonogramNotifications;

}
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startListeningForMonogramNotifications;
-(void)stopListeningForMonogramNotifications;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(id)_currentTimelineEntry;
@end

