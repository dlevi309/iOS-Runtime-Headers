/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLECentralManagerDelegate;
@interface HAPComponent : HMFObject {

	id<HAPBTLECentralManagerDelegate> centralManagerDelegate;

}

@property (assign,nonatomic,__weak) id<HAPBTLECentralManagerDelegate> centralManagerDelegate; 
-(id)initWithDelegate:(id)arg1 ;
-(void)setCentralManagerDelegate:(id<HAPBTLECentralManagerDelegate>)arg1 ;
-(id<HAPBTLECentralManagerDelegate>)centralManagerDelegate;
@end

