/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@class HDHealthStoreClient, BKSProcessAssertion, CLInUseAssertion;

@interface _HDBackgroundRunningAssertion : HDAssertion {

	BOOL _shouldAcquireCLAssertion;
	HDHealthStoreClient* _client;
	BKSProcessAssertion* _bksAssertion;
	CLInUseAssertion* _coreLocationAssertion;

}

@property (nonatomic,readonly) HDHealthStoreClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL shouldAcquireCLAssertion;                       //@synthesize shouldAcquireCLAssertion=_shouldAcquireCLAssertion - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * bksAssertion;                    //@synthesize bksAssertion=_bksAssertion - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * coreLocationAssertion;              //@synthesize coreLocationAssertion=_coreLocationAssertion - In the implementation block
-(HDHealthStoreClient *)client;
-(void)setBksAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)bksAssertion;
-(void)setCoreLocationAssertion:(CLInUseAssertion *)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(BOOL)arg3 ;
-(BOOL)shouldAcquireCLAssertion;
-(CLInUseAssertion *)coreLocationAssertion;
@end

