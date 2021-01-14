/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalCalendarObserver.h>

@class SGDCloudKitSync, NSString;

@interface SGDCloudKitSyncObserver : NSObject <SGJournalCalendarObserver> {

	/*^block*/id _cksGetter;
	SGDCloudKitSync* _cks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(id)cloudKitSync;
-(void)cancelEvent:(id)arg1 ;
-(void)confirmEventFromThisDevice:(id)arg1 ;
-(void)confirmEventFromOtherDevice:(id)arg1 ;
-(void)rejectEventFromThisDevice:(id)arg1 ;
-(void)rejectEventFromOtherDevice:(id)arg1 ;
-(void)orphanEvent:(id)arg1 ;
-(void)calendarDeleted;
-(void)cancelEvents:(id)arg1 ;
-(id)initWithCloudKitSyncGetter:(/*^block*/id)arg1 ;
@end

