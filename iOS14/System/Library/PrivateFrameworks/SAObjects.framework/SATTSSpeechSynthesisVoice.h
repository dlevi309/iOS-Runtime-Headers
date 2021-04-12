/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SATTSSpeechSynthesisVoice : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contentVersion; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * keyString; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) BOOL useServer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechSynthesisVoice;
+(id)speechSynthesisVoiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)keyString;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)languageCode;
-(void)setType:(NSString *)arg1 ;
-(NSString *)quality;
-(NSString *)name;
-(BOOL)useServer;
-(void)setUseServer:(BOOL)arg1 ;
-(NSString *)type;
-(void)setContentVersion:(NSString *)arg1 ;
-(NSString *)contentVersion;
-(void)setQuality:(NSString *)arg1 ;
-(void)setKeyString:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
@end

