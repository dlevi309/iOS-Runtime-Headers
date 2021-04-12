/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appBundleIds; 
+(id)appAuthorizationStatusRequest;
+(id)appAuthorizationStatusRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appBundleIds;
-(void)setAppBundleIds:(NSArray *)arg1 ;
@end

