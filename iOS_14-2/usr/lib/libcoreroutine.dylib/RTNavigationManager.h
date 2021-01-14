/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/GEONavigationListenerDelegate.h>

@class GEONavigationListener, GEONavigationRouteSummary, RTAuthorizationManager, NSString;

@interface RTNavigationManager : RTNotifier <GEONavigationListenerDelegate> {

	BOOL _monitorRouteSummary;
	GEONavigationListener* _navigationListener;
	GEONavigationRouteSummary* _routeSummary;
	RTAuthorizationManager* _authorizationManager;

}

@property (nonatomic,retain) GEONavigationListener * navigationListener;                 //@synthesize navigationListener=_navigationListener - In the implementation block
@property (assign,nonatomic) BOOL monitorRouteSummary;                                   //@synthesize monitorRouteSummary=_monitorRouteSummary - In the implementation block
@property (nonatomic,retain) GEONavigationRouteSummary * routeSummary;                   //@synthesize routeSummary=_routeSummary - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;              //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setup;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(id)init;
-(void)onAuthorizationNotification:(id)arg1 ;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2 ;
-(void)dealloc;
-(GEONavigationRouteSummary *)routeSummary;
-(void)setRouteSummary:(GEONavigationRouteSummary *)arg1 ;
-(id)initWithAuthorizationManager:(id)arg1 ;
-(GEONavigationListener *)navigationListener;
-(void)setMonitorRouteSummary:(BOOL)arg1 ;
-(void)setNavigationListener:(GEONavigationListener *)arg1 ;
-(BOOL)monitorRouteSummary;
@end

