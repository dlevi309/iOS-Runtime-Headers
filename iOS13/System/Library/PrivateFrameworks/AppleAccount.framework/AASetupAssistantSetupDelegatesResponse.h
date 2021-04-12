/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSDictionary * responseParameters; 
@property (nonatomic,readonly) NSString * dsid; 
-(NSNumber *)status;
-(NSString *)dsid;
-(NSString *)statusMessage;
-(NSDictionary *)responseParameters;
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
@end

