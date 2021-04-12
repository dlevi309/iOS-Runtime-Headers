/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying> {

	BOOL _regenerateKeys;
	NSString* _clientCertLabel;
	NSString* _intermediateCertLabel;
	NSString* _label;
	unsigned long long _purpose;
	unsigned long long _style;
	NSString* _prompt;

}

@property (nonatomic,copy) NSString * clientCertLabel;                    //@synthesize clientCertLabel=_clientCertLabel - In the implementation block
@property (nonatomic,copy) NSString * intermediateCertLabel;              //@synthesize intermediateCertLabel=_intermediateCertLabel - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long purpose;                  //@synthesize purpose=_purpose - In the implementation block
@property (assign,nonatomic) BOOL regenerateKeys;                         //@synthesize regenerateKeys=_regenerateKeys - In the implementation block
@property (assign,nonatomic) unsigned long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * prompt;                             //@synthesize prompt=_prompt - In the implementation block
+(unsigned long long)preferredAttestationStyle;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setPurpose:(unsigned long long)arg1 ;
-(unsigned long long)purpose;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)optionsDictionary;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(BOOL)regenerateKeys;
-(void)setRegenerateKeys:(BOOL)arg1 ;
-(NSString *)clientCertLabel;
-(NSString *)intermediateCertLabel;
-(BOOL)_compareString:(id)arg1 withString:(id)arg2 ;
-(void)setClientCertLabel:(NSString *)arg1 ;
-(void)setIntermediateCertLabel:(NSString *)arg1 ;
@end

