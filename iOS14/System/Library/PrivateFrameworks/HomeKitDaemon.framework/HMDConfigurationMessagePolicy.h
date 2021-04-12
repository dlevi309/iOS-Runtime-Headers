/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)__initWithOperationTypes:(unsigned long long)arg1 ;
-(unsigned long long)operationTypes;
@end

