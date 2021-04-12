/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)index;
-(NSString *)serviceType;
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
@end

