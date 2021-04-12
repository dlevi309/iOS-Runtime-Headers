/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccountHandle, NSString;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;

}

@property (readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
+(id)identifierNamespace;
-(BOOL)isLocal;
-(id)init;
-(id)initWithDestination:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destination;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
@end

