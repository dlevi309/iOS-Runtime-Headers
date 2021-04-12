/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOApplicationAuditToken, MNDirectionsRequestManager;

@interface MNNavigationClientProxy : NSObject {

	GEOApplicationAuditToken* _auditToken;
	MNDirectionsRequestManager* _directionsRequestManager;

}
-(id)init;
-(void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg1 ;
-(id)_directionsRequestManager;
@end

