/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_closeConnection;
-(void)_stop;
-(void)_openConnection;
-(void)dealloc;
-(void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 ;
-(void)updateNavigationRouteStatus:(id)arg1 ;
-(void)updateNavigationRouteWithUpdate:(id)arg1 ;
-(void)_resendRouteDetailsAndStatus;
-(void)_connectionWasInterrupted;
-(void)_connectionWasInvalidated;
@end

