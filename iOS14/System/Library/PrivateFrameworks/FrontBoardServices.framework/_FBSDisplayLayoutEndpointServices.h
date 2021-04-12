/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject {

	_FBSDisplayLayoutService* _sharedLock_services[3];
	unsigned long long _sharedLock_servicesRefCnt[3];

}
+(void)_checkinService:(id)arg1 ;
+(id)_checkoutServiceWithEndpoint:(id)arg1 qos:(char)arg2 ;
@end

