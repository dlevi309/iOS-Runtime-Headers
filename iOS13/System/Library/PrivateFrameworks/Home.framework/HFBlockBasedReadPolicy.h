/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	/*^block*/id _readPolicyBlock;

}

@property (nonatomic,copy,readonly) id readPolicyBlock;              //@synthesize readPolicyBlock=_readPolicyBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithReadPolicyBlock:(/*^block*/id)arg1 ;
-(id)readPolicyBlock;
@end

