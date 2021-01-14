/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)queryParameters;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSArray *)searchTypes;
@end

