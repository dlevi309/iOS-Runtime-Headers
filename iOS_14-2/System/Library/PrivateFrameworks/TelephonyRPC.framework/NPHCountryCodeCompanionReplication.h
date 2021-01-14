/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

