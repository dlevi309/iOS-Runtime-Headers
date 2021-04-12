/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceAuthenticationContext : NSObject <NSSecureCoding> {

	BOOL _supportsState;
	NSString* _clientID;
	NSString* _authURL;
	NSString* _tokenURL;
	NSString* _carrierName;
	NSString* _iccid;
	NSString* _scope;
	NSString* _sourceApplicationAccountIdentifier;

}

@property (nonatomic,retain) NSString * clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSString * authURL;                                         //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,retain) NSString * tokenURL;                                        //@synthesize tokenURL=_tokenURL - In the implementation block
@property (nonatomic,retain) NSString * carrierName;                                     //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * iccid;                                           //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * scope;                                           //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) BOOL supportsState;                                         //@synthesize supportsState=_supportsState - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationAccountIdentifier;              //@synthesize sourceApplicationAccountIdentifier=_sourceApplicationAccountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(id)init;
-(NSString *)carrierName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)authURL;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)tokenURL;
-(void)setTokenURL:(NSString *)arg1 ;
-(void)setAuthURL:(NSString *)arg1 ;
-(BOOL)supportsState;
-(NSString *)sourceApplicationAccountIdentifier;
-(void)setSupportsState:(BOOL)arg1 ;
-(void)setSourceApplicationAccountIdentifier:(NSString *)arg1 ;
@end

