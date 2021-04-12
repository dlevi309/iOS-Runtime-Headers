/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDDeviceHandle, HMDAccountHandle, NSString, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	_HMDDeviceHandle* _internal;

}

@property (copy,readonly) _HMDDeviceHandle * internal;                   //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) NSUUID * identifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)destination;
-(_HMDDeviceHandle *)internal;
-(id)shortDescription;
-(BOOL)isLocal;
-(id)attributeDescriptions;
-(id)initWithInternal:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
@end

