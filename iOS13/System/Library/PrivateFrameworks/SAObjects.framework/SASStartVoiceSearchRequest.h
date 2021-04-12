/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASStartSpeechDictation.h>

@class NSDictionary, NSArray;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (nonatomic,copy) NSArray * searchTypes; 
+(id)startVoiceSearchRequest;
+(id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)encodedClassName;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)searchTypes;
@end

