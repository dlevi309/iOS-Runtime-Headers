/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSString * homeSharingID; 
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) BOOL rememberPassword; 
@property (getter=isDiagnosticsEnabled,nonatomic,readonly) BOOL diagnosticsEnabled; 
-(id)init;
-(NSString *)countryCode;
-(NSString *)language;
-(NSString *)homeSharingGroupID;
-(BOOL)isDiagnosticsEnabled;
-(NSString *)homeSharingID;
-(BOOL)rememberPassword;
-(id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(BOOL)arg5 rememberPassword:(BOOL)arg6 ;
@end

