/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * appBundleId; 
+(id)appEntitlementRequest;
+(id)appEntitlementRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

