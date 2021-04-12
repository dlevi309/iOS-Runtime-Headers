/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntent; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntentResponse; 
+(id)launchAppWithIntent;
+(id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)handledIntent;
-(void)setHandledIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)handledIntentResponse;
-(void)setHandledIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedHandledIntent;
-(void)setJsonEncodedHandledIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedHandledIntentResponse;
-(void)setJsonEncodedHandledIntentResponse:(NSString *)arg1 ;
@end

