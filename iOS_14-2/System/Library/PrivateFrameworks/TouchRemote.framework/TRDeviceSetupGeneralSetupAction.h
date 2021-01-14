/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)countryCode;
-(id)init;
-(BOOL)isDiagnosticsEnabled;
-(NSString *)homeSharingGroupID;
-(NSString *)language;
-(NSString *)homeSharingID;
-(BOOL)rememberPassword;
-(id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(BOOL)arg5 rememberPassword:(BOOL)arg6 ;
@end

