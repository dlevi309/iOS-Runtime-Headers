/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject {

	_FBSDisplayLayoutService* _sharedLock_services[3];
	unsigned long long _sharedLock_servicesRefCnt[3];

}
+(id)_checkoutServiceWithEndpoint:(id)arg1 qos:(char)arg2 ;
+(void)_checkinService:(id)arg1 ;
@end

