/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject {

	NSString* _characteristicType;
	NSString* _serviceType;
	NSString* _index;

}

@property (nonatomic,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * index;                           //@synthesize index=_index - In the implementation block
-(NSString *)index;
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
-(unsigned long long)hash;
-(NSString *)serviceType;
-(BOOL)isEqual:(id)arg1 ;
@end

