/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPairingDriverWorkItem.h>

@protocol HAP2AccessoryServerPairingDriverWorkItem <HAP2Cancelable>
@required
-(void)startWithPairingDriver:(id)arg1;

@end


@protocol HAP2AccessoryServerPairingDriverWorkItemInfo;
@class HAP2SerializedOperationQueue, HMFActivity, NSString;

@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject <HAP2AccessoryServerPairingDriverWorkItem> {

	id<HAP2AccessoryServerPairingDriverWorkItemInfo> _pairingDriver;
	HAP2SerializedOperationQueue* _operationQueue;
	HMFActivity* _pairingActivity;

}

@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerPairingDriverWorkItemInfo> pairingDriver;              //@synthesize pairingDriver=_pairingDriver - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMFActivity * pairingActivity;                                               //@synthesize pairingActivity=_pairingActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HAP2SerializedOperationQueue *)operationQueue;
-(void)cancelWithError:(id)arg1 ;
-(NSString *)description;
-(void)finishWithError:(id)arg1 ;
-(HMFActivity *)pairingActivity;
-(void)runForPairingDriver:(id)arg1 ;
-(id<HAP2AccessoryServerPairingDriverWorkItemInfo>)pairingDriver;
-(id)maybePairingDriver;
-(void)startWithPairingDriver:(id)arg1 ;
@end

