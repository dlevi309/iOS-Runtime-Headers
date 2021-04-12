/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(NSNumber *)remainingTime;
-(void)setRemainingTime:(NSNumber *)arg1 ;
-(NSData *)authorizationID;
-(NSData *)publicKeyIdentifier;
-(void)setPublicKeyIdentifier:(NSData *)arg1 ;
-(void)setAuthorizationID:(NSData *)arg1 ;
-(void)setRemainingCount:(NSNumber *)arg1 ;
-(void)setAnonymizedDSID:(NSData *)arg1 ;
-(NSNumber *)remainingCount;
-(NSData *)anonymizedDSID;
@end

