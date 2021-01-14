/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (copy,readonly) NSString * senderCorrelationIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isAuthenticated;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)senderCorrelationIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

