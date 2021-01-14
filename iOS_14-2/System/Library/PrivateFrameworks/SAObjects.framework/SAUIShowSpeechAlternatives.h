/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * title; 
+(id)showSpeechAlternatives;
+(id)showSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)requestId;
-(SASRecognition *)recognition;
-(NSString *)title;
@end

