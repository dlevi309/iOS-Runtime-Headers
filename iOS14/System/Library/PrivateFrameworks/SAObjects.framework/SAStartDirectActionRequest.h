/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString, NSDictionary;

@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic,copy) NSString * directAction; 
@property (nonatomic,copy) NSDictionary * requestExecutionParameters; 
@property (nonatomic,copy) NSString * utteranceFromRequestParameters; 
+(id)startDirectActionRequest;
+(id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)requestExecutionParameters;
-(void)setRequestExecutionParameters:(NSDictionary *)arg1 ;
-(NSString *)utteranceFromRequestParameters;
-(void)setUtteranceFromRequestParameters:(NSString *)arg1 ;
-(NSString *)directAction;
-(void)setDirectAction:(NSString *)arg1 ;
@end

