/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic,copy) NSData * encryptionKey; 
@property (nonatomic,copy) NSData * hmac; 
@property (nonatomic,copy) NSData * hmacKey; 
@property (nonatomic,copy) NSData * initializationVector; 
@property (nonatomic,copy) NSString * type; 
+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)encryptionKey;
-(id)groupIdentifier;
-(NSData *)hmac;
-(id)encodedClassName;
-(NSData *)initializationVector;
-(void)setType:(NSString *)arg1 ;
-(NSData *)hmacKey;
-(NSString *)type;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setHmac:(NSData *)arg1 ;
-(void)setHmacKey:(NSData *)arg1 ;
-(void)setInitializationVector:(NSData *)arg1 ;
@end

