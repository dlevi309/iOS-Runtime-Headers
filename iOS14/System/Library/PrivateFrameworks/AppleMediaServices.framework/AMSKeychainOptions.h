/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying> {

	BOOL _regenerateKeys;
	BOOL _authenticationFallbackVisible;
	BOOL _displayAuthenticationReason;
	NSString* _clientCertLabel;
	NSString* _intermediateCertLabel;
	NSString* _label;
	unsigned long long _purpose;
	unsigned long long _style;
	NSString* _prompt;

}

@property (nonatomic,copy) NSString * clientCertLabel;                        //@synthesize clientCertLabel=_clientCertLabel - In the implementation block
@property (nonatomic,copy) NSString * intermediateCertLabel;                  //@synthesize intermediateCertLabel=_intermediateCertLabel - In the implementation block
@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long purpose;                      //@synthesize purpose=_purpose - In the implementation block
@property (assign,nonatomic) BOOL regenerateKeys;                             //@synthesize regenerateKeys=_regenerateKeys - In the implementation block
@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL authenticationFallbackVisible;              //@synthesize authenticationFallbackVisible=_authenticationFallbackVisible - In the implementation block
@property (assign,nonatomic) BOOL displayAuthenticationReason;                //@synthesize displayAuthenticationReason=_displayAuthenticationReason - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                 //@synthesize prompt=_prompt - In the implementation block
+(unsigned long long)preferredAttestationStyle;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(unsigned long long)purpose;
-(void)setPurpose:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)clientCertLabel;
-(NSString *)intermediateCertLabel;
-(void)setClientCertLabel:(NSString *)arg1 ;
-(BOOL)_compareString:(id)arg1 withString:(id)arg2 ;
-(void)setIntermediateCertLabel:(NSString *)arg1 ;
-(void)setAuthenticationFallbackVisible:(BOOL)arg1 ;
-(void)setDisplayAuthenticationReason:(BOOL)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(id)description;
-(id)optionsDictionary;
-(BOOL)regenerateKeys;
-(void)setRegenerateKeys:(BOOL)arg1 ;
-(BOOL)displayAuthenticationReason;
-(BOOL)authenticationFallbackVisible;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(unsigned long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

