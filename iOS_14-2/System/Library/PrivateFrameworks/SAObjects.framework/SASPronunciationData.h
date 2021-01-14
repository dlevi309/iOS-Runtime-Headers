/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * apgId; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (assign,nonatomic) long long tokenOffset; 
@property (nonatomic,copy) NSArray * ttsPronunciations; 
@property (nonatomic,copy) NSString * ttsVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationData;
+(id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)apgId;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)orthography;
-(void)setApgId:(NSString *)arg1 ;
-(long long)tokenOffset;
-(void)setTokenOffset:(long long)arg1 ;
-(NSArray *)ttsPronunciations;
-(void)setTtsPronunciations:(NSArray *)arg1 ;
-(NSString *)ttsVersion;
-(void)setTtsVersion:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSString *)language;
@end

