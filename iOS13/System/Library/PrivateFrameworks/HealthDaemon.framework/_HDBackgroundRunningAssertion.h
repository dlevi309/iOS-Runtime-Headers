/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(BOOL)arg3 ;
-(BOOL)shouldAcquireCLAssertion;
-(BKSProcessAssertion *)bksAssertion;
-(void)setBksAssertion:(BKSProcessAssertion *)arg1 ;
-(CLInUseAssertion *)coreLocationAssertion;
-(void)setCoreLocationAssertion:(CLInUseAssertion *)arg1 ;
@end

