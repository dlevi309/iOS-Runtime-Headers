/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXCalendarPresenter, SXHost;
@class NSString;

@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXCalendarPresenter> _calendarPresenter;
	id<SXHost> _host;

}

@property (nonatomic,readonly) id<SXCalendarPresenter> calendarPresenter;              //@synthesize calendarPresenter=_calendarPresenter - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                        //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(void)createEvent:(id)arg1 ;
-(id)activityGroupForAction:(id)arg1 ;
-(void)showInCalendar:(id)arg1 ;
-(id<SXCalendarPresenter>)calendarPresenter;
-(id)initWithCalendarPresenter:(id)arg1 host:(id)arg2 ;
@end

