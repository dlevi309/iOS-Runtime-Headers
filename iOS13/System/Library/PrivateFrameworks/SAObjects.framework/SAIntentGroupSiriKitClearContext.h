/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * reason; 
+(id)siriKitClearContext;
+(id)siriKitClearContextWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)siriKitClearContextWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

