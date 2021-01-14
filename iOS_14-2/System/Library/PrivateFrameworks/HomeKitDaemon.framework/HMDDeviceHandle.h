/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDDeviceHandle, HMDAccountHandle, NSString, NSData, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	_HMDDeviceHandle* _internal;

}

@property (copy,readonly) _HMDDeviceHandle * internal;                   //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) NSData * pushToken; 
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) NSUUID * identifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg1 ;
-(BOOL)isLocal;
-(NSData *)pushToken;
-(id)initWithInternal:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(_HMDDeviceHandle *)internal;
-(id)shortDescription;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destination;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(BOOL)matchesPushToken:(id)arg1 ;
@end

