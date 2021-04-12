/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASStartSpeech.h>

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (nonatomic,retain) SASPronunciationContext * context; 
+(id)startPronunciationRequest;
+(id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SASPronunciationContext *)context;
-(void)setContext:(SASPronunciationContext *)arg1 ;
@end

