/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, NSArray;

@interface HAPBTLEServiceSignature : HMFObject {

	BOOL _authenticated;
	NSUUID* _serviceType;
	NSNumber* _serviceInstanceID;
	unsigned long long _serviceProperties;
	NSArray* _linkedServices;

}

@property (nonatomic,copy,readonly) NSUUID * serviceType;                              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                      //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceProperties;                   //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,readonly) NSArray * linkedServices;                               //@synthesize linkedServices=_linkedServices - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
-(BOOL)isAuthenticated;
-(unsigned long long)serviceProperties;
-(NSArray *)linkedServices;
-(id)description;
-(NSUUID *)serviceType;
-(NSNumber *)serviceInstanceID;
-(id)initWithServiceType:(id)arg1 serviceInstanceID:(id)arg2 serviceProperties:(unsigned long long)arg3 linkedServices:(id)arg4 authenticated:(BOOL)arg5 ;
@end

