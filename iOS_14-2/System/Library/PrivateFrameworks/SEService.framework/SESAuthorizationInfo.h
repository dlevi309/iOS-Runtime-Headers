/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData;

@interface SESAuthorizationInfo : NSObject <NSSecureCoding> {

	unsigned char _state;
	NSNumber* _remainingCount;
	NSNumber* _remainingTime;
	NSData* _publicKeyIdentifier;
	NSData* _authorizationID;
	NSData* _anonymizedDSID;

}

@property (assign,nonatomic) unsigned char state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * remainingCount;                 //@synthesize remainingCount=_remainingCount - In the implementation block
@property (nonatomic,retain) NSNumber * remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) NSData * publicKeyIdentifier;              //@synthesize publicKeyIdentifier=_publicKeyIdentifier - In the implementation block
@property (nonatomic,retain) NSData * authorizationID;                  //@synthesize authorizationID=_authorizationID - In the implementation block
@property (nonatomic,retain) NSData * anonymizedDSID;                   //@synthesize anonymizedDSID=_anonymizedDSID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withState:(unsigned char)arg1 remaningCount:(id)arg2 remainingTime:(id)arg3 publicKeyIdentifier:(id)arg4 authorizationID:(id)arg5 anonymizedDSID:(id)arg6 ;
-(NSNumber *)remainingTime;
-(void)setRemainingTime:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setState:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)state;
-(NSData *)authorizationID;
-(NSData *)publicKeyIdentifier;
-(void)setAuthorizationID:(NSData *)arg1 ;
-(void)setRemainingCount:(NSNumber *)arg1 ;
-(void)setPublicKeyIdentifier:(NSData *)arg1 ;
-(void)setAnonymizedDSID:(NSData *)arg1 ;
-(NSNumber *)remainingCount;
-(NSData *)anonymizedDSID;
@end

