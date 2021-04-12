/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (nonatomic,copy) NSString * delayedActionAceId; 
+(id)delayedActionCancelCommand;
+(id)delayedActionCancelCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)delayedActionAceId;
-(void)setDelayedActionAceId:(NSString *)arg1 ;
@end

