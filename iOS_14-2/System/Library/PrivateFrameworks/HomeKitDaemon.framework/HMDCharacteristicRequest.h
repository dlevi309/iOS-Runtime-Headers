/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCharacteristic, NSString;

@interface HMDCharacteristicRequest : HMFObject <HMFLogging> {

	HMDCharacteristic* _characteristic;
	id _previousValue;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)requestWithCharacteristic:(id)arg1 ;
-(id)attributeDescriptions;
-(HMDCharacteristic *)characteristic;
-(id)previousValue;
-(id)initWithCharacteristic:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

