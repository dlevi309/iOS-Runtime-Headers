/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject {

	NSNumber* _identifier;
	NSString* _numberWithDialCode;
	NSString* _obfuscatedNumber;
	NSString* _pushMode;

}

@property (nonatomic,retain) NSNumber * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * numberWithDialCode;              //@synthesize numberWithDialCode=_numberWithDialCode - In the implementation block
@property (nonatomic,retain) NSString * obfuscatedNumber;                //@synthesize obfuscatedNumber=_obfuscatedNumber - In the implementation block
@property (nonatomic,retain) NSString * pushMode;                        //@synthesize pushMode=_pushMode - In the implementation block
-(NSString *)pushMode;
-(id)description;
-(void)setPushMode:(NSString *)arg1 ;
-(NSString *)numberWithDialCode;
-(void)setNumberWithDialCode:(NSString *)arg1 ;
-(NSString *)obfuscatedNumber;
-(void)setObfuscatedNumber:(NSString *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
@end

