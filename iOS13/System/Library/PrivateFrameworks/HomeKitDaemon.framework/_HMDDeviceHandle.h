/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)destination;
-(BOOL)isLocal;
-(id)initWithDestination:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
@end

