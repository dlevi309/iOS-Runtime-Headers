/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/CalActivatable.h>

@class NSArray, EKSource, EKEventStore, CalDarwinNotificationListener;

@interface EKCalendarVisibilityManager : NSObject <CalActivatable> {

	BOOL _active;
	NSArray* _invisibleCalendars;
	EKSource* _limitedToSource;
	EKEventStore* _eventStore;
	/*^block*/id _visibilityChangedCallback;
	CalDarwinNotificationListener* _notificationListener;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                                         //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) id visibilityChangedCallback;                                      //@synthesize visibilityChangedCallback=_visibilityChangedCallback - In the implementation block
@property (nonatomic,readonly) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (assign) BOOL active;                                                                   //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCalendars; 
@property (nonatomic,readonly) NSArray * visibleCalendarsForAllIdentities; 
@property (nonatomic,readonly) NSArray * invisibleCalendarsForAllIdentities; 
@property (nonatomic,retain) NSArray * invisibleCalendars;                                        //@synthesize invisibleCalendars=_invisibleCalendars - In the implementation block
@property (nonatomic,retain) EKSource * limitedToSource;                                          //@synthesize limitedToSource=_limitedToSource - In the implementation block
+(id)_defaultQueue;
+(id)visibilityChangedNotificationName;
-(EKEventStore *)eventStore;
-(void)setLimitedToSource:(EKSource *)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSArray *)visibleCalendarsForAllIdentities;
-(NSArray *)invisibleCalendars;
-(id)_calendarsThatAreVisible:(BOOL)arg1 filteredByIdentity:(BOOL)arg2 ;
-(NSArray *)invisibleCalendarsForAllIdentities;
-(EKSource *)limitedToSource;
-(CalDarwinNotificationListener *)notificationListener;
-(void)deactivate;
-(void)activate;
-(NSArray *)visibleCalendars;
-(id)_deselectedCalendarIdentifiers;
-(id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(/*^block*/id)arg3 queue:(id)arg4 activate:(BOOL)arg5 ;
-(id)initWithEventStore:(id)arg1 visibilityChangedCallback:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)visibilityChangedCallback;
-(id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(/*^block*/id)arg3 ;
-(void)setInvisibleCalendars:(NSArray *)arg1 ;
-(id)initWithEventStore:(id)arg1 visibilityChangedCallback:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)dealloc;
@end

