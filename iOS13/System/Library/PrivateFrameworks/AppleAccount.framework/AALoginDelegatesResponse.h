/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary;

@interface AALoginDelegatesResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSDictionary * responseParameters; 
@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * altDSID; 
-(NSNumber *)status;
-(NSString *)dsid;
-(NSString *)altDSID;
-(NSString *)statusMessage;
-(NSDictionary *)responseParameters;
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
-(id)augmentedResponseParametersForServiceIdentifier:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 DSID:(id)arg4 altDSID:(id)arg5 ;
@end

