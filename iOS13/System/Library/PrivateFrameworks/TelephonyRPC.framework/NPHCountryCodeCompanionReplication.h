/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/


@class NPSManager;

@interface NPHCountryCodeCompanionReplication : NSObject {

	NPSManager* _npsManager;

}
-(id)init;
-(void)dealloc;
-(void)_updateActiveCountryCode;
-(void)_updateHomeCountryCode;
-(void)_updateNetworkCountryCode;
-(void)_updateAndBroadcastCodeWithKey:(id)arg1 usingFunction:(/*function pointer*/void*)arg2 ;
@end

