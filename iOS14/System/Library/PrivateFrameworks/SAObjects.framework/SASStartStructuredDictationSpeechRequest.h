/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASStartSpeechRequest.h>

@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (nonatomic,copy) NSString * structuredDictationType; 
+(id)startStructuredDictationSpeechRequest;
+(id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)structuredDictationType;
-(void)setStructuredDictationType:(NSString *)arg1 ;
@end

