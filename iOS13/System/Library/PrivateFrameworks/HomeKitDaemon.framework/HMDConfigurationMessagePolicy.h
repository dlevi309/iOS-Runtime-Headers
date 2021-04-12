/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDConfigurationMessagePolicy : HMFMessagePolicy {

	unsigned long long _operationTypes;

}

@property (readonly) unsigned long long operationTypes;              //@synthesize operationTypes=_operationTypes - In the implementation block
+(id)policyWithOperationTypes:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)__initWithOperationTypes:(unsigned long long)arg1 ;
-(unsigned long long)operationTypes;
@end

