/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)requestId;
-(SASRecognition *)recognition;
-(id)encodedClassName;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setRecognition:(SASRecognition *)arg1 ;
@end

