/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

