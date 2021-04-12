/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

