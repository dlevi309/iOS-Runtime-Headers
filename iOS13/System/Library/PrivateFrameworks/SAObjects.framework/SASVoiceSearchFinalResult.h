/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * recognitionText; 
@property (nonatomic,copy) NSArray * voiceSearchResults; 
+(id)voiceSearchFinalResult;
+(id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)recognitionText;
-(void)setRecognitionText:(NSString *)arg1 ;
-(NSArray *)voiceSearchResults;
-(void)setVoiceSearchResults:(NSArray *)arg1 ;
@end

