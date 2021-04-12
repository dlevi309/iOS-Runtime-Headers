/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)numberWithDialCode;
-(void)setNumberWithDialCode:(NSString *)arg1 ;
-(NSString *)obfuscatedNumber;
-(void)setObfuscatedNumber:(NSString *)arg1 ;
-(NSString *)pushMode;
-(void)setPushMode:(NSString *)arg1 ;
@end

