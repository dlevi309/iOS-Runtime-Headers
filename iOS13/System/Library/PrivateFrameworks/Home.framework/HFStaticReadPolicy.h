/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	unsigned long long _decision;

}

@property (nonatomic,readonly) unsigned long long decision;              //@synthesize decision=_decision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithDecision:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithDecision:(unsigned long long)arg1 ;
-(unsigned long long)decision;
@end

