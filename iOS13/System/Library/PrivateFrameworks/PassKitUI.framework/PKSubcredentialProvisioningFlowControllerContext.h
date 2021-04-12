/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKPaymentWebService, PKPaymentPass, NSError;

@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying> {

	BOOL _shouldExitFlowOnError;
	long long _flowType;
	PKPaymentWebService* _localDeviceWebService;
	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentPass* _provisionedPass;
	PKPaymentPass* _provisionedRemotePass;
	NSError* _error;

}

@property (nonatomic,readonly) long long flowType;                                      //@synthesize flowType=_flowType - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * localDeviceWebService;               //@synthesize localDeviceWebService=_localDeviceWebService - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * remoteDeviceWebService;              //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
@property (nonatomic,retain) PKPaymentPass * provisionedPass;                           //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,retain) PKPaymentPass * provisionedRemotePass;                     //@synthesize provisionedRemotePass=_provisionedRemotePass - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL shouldExitFlowOnError;                                //@synthesize shouldExitFlowOnError=_shouldExitFlowOnError - In the implementation block
@property (nonatomic,readonly) long long setupContext; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(PKPaymentWebService *)localDeviceWebService;
-(PKPaymentWebService *)remoteDeviceWebService;
-(PKPaymentPass *)provisionedPass;
-(long long)setupContext;
-(PKPaymentPass *)provisionedRemotePass;
-(void)setProvisionedRemotePass:(PKPaymentPass *)arg1 ;
-(id)initWithFlowType:(long long)arg1 ;
-(void)setLocalDeviceWebService:(PKPaymentWebService *)arg1 ;
-(void)setRemoteDeviceWebService:(PKPaymentWebService *)arg1 ;
-(void)setProvisionedPass:(PKPaymentPass *)arg1 ;
-(BOOL)shouldExitFlowOnError;
-(long long)flowType;
-(void)setShouldExitFlowOnError:(BOOL)arg1 ;
@end

