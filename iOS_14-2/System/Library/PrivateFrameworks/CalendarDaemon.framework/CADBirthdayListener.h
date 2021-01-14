/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CalBirthdayListener;
@interface CADBirthdayListener : NSObject {

	id<CalBirthdayListener> _ekBirthdayListener;
	Class _listenerClass;

}

@property (nonatomic,retain) id<CalBirthdayListener> ekBirthdayListener;              //@synthesize ekBirthdayListener=_ekBirthdayListener - In the implementation block
@property (nonatomic,retain) Class listenerClass;                                     //@synthesize listenerClass=_listenerClass - In the implementation block
+(void)setBirthdayCalendarEnabled:(BOOL)arg1 ;
+(void)start;
+(id)sharedListener;
+(BOOL)birthdayCalendarEnabled;
-(void)setBirthdayCalendarEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setEkBirthdayListener:(id<CalBirthdayListener>)arg1 ;
-(Class)listenerClass;
-(void)setListenerClass:(Class)arg1 ;
-(id<CalBirthdayListener>)ekBirthdayListener;
-(BOOL)birthdayCalendarEnabled;
@end

