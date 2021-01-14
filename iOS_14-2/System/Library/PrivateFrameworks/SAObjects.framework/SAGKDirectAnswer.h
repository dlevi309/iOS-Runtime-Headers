/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * answer; 
@property (nonatomic,copy) NSString * confidenceLevel; 
@property (nonatomic,retain) SAGKSpeakableAnswer * speakableAnswer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)answer;
-(SAGKSpeakableAnswer *)speakableAnswer;
-(void)setSpeakableAnswer:(SAGKSpeakableAnswer *)arg1 ;
-(NSString *)confidenceLevel;
-(void)setAnswer:(NSString *)arg1 ;
-(void)setConfidenceLevel:(NSString *)arg1 ;
@end

