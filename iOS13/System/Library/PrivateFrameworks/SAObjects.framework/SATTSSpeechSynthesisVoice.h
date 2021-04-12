/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)quality;
-(NSString *)keyString;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)contentVersion;
-(id)encodedClassName;
-(void)setContentVersion:(NSString *)arg1 ;
-(void)setKeyString:(NSString *)arg1 ;
-(BOOL)useServer;
-(void)setUseServer:(BOOL)arg1 ;
@end

