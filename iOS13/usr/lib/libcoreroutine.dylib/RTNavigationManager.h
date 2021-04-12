/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setup;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2 ;
-(GEONavigationRouteSummary *)routeSummary;
-(void)setRouteSummary:(GEONavigationRouteSummary *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(id)initWithAuthorizationManager:(id)arg1 ;
-(void)onAuthorizationNotification:(id)arg1 ;
-(GEONavigationListener *)navigationListener;
-(void)setMonitorRouteSummary:(BOOL)arg1 ;
-(void)setNavigationListener:(GEONavigationListener *)arg1 ;
-(BOOL)monitorRouteSummary;
@end

