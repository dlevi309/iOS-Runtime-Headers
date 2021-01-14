/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
+(id)confirmIntent;
+(id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
@end

