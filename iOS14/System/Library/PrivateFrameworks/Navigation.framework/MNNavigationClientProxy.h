/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

