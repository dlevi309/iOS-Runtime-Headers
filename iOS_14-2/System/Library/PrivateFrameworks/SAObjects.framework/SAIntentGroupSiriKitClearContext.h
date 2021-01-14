/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * reason; 
+(id)siriKitClearContext;
+(id)siriKitClearContextWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)siriKitClearContextWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithReason:(id)arg1 ;
-(NSString *)reason;
-(BOOL)mutatingCommand;
-(void)setReason:(NSString *)arg1 ;
@end

