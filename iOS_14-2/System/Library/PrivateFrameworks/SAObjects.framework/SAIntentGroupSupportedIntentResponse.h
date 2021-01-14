/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * useCaseId; 
+(id)supportedIntentResponse;
+(id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)useCaseId;
-(void)setUseCaseId:(NSString *)arg1 ;
@end

