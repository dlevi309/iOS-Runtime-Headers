/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASStartSpeech.h>

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (nonatomic,retain) SASPronunciationContext * context; 
+(id)startPronunciationRequest;
+(id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASPronunciationContext *)context;
-(id)groupIdentifier;
-(void)setContext:(SASPronunciationContext *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

