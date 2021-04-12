/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageString; 
@property (nonatomic,copy) NSString * masteredVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) long long resourceContentVersion; 
@property (nonatomic,copy) NSString * resourceMasteredVersion; 
@property (assign,nonatomic) long long voiceContentVersion; 
@property (nonatomic,copy) NSString * voiceType; 
+(id)voice;
+(id)voiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)voiceType;
-(NSString *)languageString;
-(long long)resourceContentVersion;
-(void)setResourceContentVersion:(long long)arg1 ;
-(NSString *)resourceMasteredVersion;
-(void)setResourceMasteredVersion:(NSString *)arg1 ;
-(long long)voiceContentVersion;
-(NSString *)quality;
-(NSString *)name;
-(NSString *)masteredVersion;
-(void)setLanguageString:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(void)setVoiceType:(NSString *)arg1 ;
-(void)setVoiceContentVersion:(long long)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
@end

