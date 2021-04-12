/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)quality;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)masteredVersion;
-(void)setLanguageString:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(void)setVoiceType:(NSString *)arg1 ;
-(void)setVoiceContentVersion:(long long)arg1 ;
-(NSString *)languageString;
-(long long)resourceContentVersion;
-(void)setResourceContentVersion:(long long)arg1 ;
-(NSString *)resourceMasteredVersion;
-(void)setResourceMasteredVersion:(NSString *)arg1 ;
-(long long)voiceContentVersion;
-(NSString *)voiceType;
@end

