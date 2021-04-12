/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding> {

	NSData* _payloadHash;

}

@property (nonatomic,retain) NSData * payloadHash;              //@synthesize payloadHash=_payloadHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHash:(id)arg1 ;
-(NSData *)payloadHash;
-(BOOL)isEqualToReplayKey:(id)arg1 ;
-(id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2 ;
-(void)setPayloadHash:(NSData *)arg1 ;
@end

