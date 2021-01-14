/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class PPXPCClientHelper;

@interface PPConfigClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)variantNameWithError:(id*)arg1 ;
-(id)readableTrialTreatmentsMappingWithError:(id*)arg1 ;
-(unsigned long long)assetVersionWithError:(id*)arg1 ;
@end

