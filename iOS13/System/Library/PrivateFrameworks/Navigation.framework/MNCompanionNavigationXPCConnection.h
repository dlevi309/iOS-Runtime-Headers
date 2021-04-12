/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNCompanionNavigationDelegate.h>

@class NSXPCConnection, GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSString;

@interface MNCompanionNavigationXPCConnection : NSObject <MNCompanionNavigationDelegate> {

	NSXPCConnection* _connection;
	GEOCompanionRouteDetails* _companionRouteDetails;
	GEOCompanionRouteStatus* _companionRouteStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_closeConnection;
-(void)_stop;
-(void)_openConnection;
-(void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 ;
-(void)updateNavigationRouteStatus:(id)arg1 ;
-(void)updateNavigationRouteWithUpdate:(id)arg1 ;
-(void)_connectionWasInterrupted;
-(void)_connectionWasInvalidated;
-(void)_resendRouteDetailsAndStatus;
@end

