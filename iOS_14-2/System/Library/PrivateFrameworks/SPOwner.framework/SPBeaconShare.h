/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSDate* _shareDate;
	unsigned long long _sharePrimaryIndex;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                                     //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                       //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                                   //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;                      //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * shareDate;                           //@synthesize shareDate=_shareDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sharePrimaryIndex;              //@synthesize sharePrimaryIndex=_sharePrimaryIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(SPHandle *)arg1 ;
-(SPHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDate *)shareDate;
-(NSString *)correlationIdentifier;
-(unsigned long long)sharePrimaryIndex;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(BOOL)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5 shareDate:(id)arg6 sharePrimaryIndex:(unsigned long long)arg7 ;
-(NSDate *)expiration;
-(void)setExpiration:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accepted;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

