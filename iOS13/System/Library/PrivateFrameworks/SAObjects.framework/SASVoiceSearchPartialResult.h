/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * recognitionText; 
@property (assign,nonatomic) BOOL stable; 
@property (nonatomic,copy) NSArray * voiceSearchResults; 
+(id)voiceSearchPartialResult;
+(id)voiceSearchPartialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)recognitionText;
-(void)setRecognitionText:(NSString *)arg1 ;
-(NSArray *)voiceSearchResults;
-(void)setVoiceSearchResults:(NSArray *)arg1 ;
-(BOOL)stable;
-(void)setStable:(BOOL)arg1 ;
@end

