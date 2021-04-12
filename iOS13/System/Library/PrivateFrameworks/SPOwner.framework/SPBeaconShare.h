/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SPHandle, NSDate, NSString;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {

	BOOL _accepted;
	NSUUID* _identifier;
	SPHandle* _handle;
	NSDate* _expiration;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL accepted;                               //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                           //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;              //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(SPHandle *)handle;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setHandle:(SPHandle *)arg1 ;
-(NSDate *)expiration;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(BOOL)accepted;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(BOOL)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5 ;
-(void)setAccepted:(BOOL)arg1 ;
@end

