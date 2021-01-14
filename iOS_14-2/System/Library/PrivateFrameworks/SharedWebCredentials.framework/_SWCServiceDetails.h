/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SWCServiceSpecifier, NSNumber;

@interface _SWCServiceDetails : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCFields _fields;
	_SWCServiceSpecifier* _serviceSpecifier;

}

@property (getter=isApproved,readonly) BOOL approved; 
@property (assign,nonatomic) unsigned char userApprovalState; 
@property (readonly) unsigned char siteApprovalState; 
@property (readonly) unsigned char frameworkApprovalState; 
@property (getter=isUpdating,readonly) BOOL updating; 
@property (getter=isSystemApplication,readonly) BOOL systemApplication; 
@property (getter=wasReadFromDisk,readonly) BOOL readFromDisk; 
@property (getter=wasReadFromAlternateLocationOnDisk,readonly) BOOL readFromAlternateLocationOnDisk; 
@property (getter=isAlwaysEnabled,readonly) BOOL alwaysEnabled; 
@property (getter=isEnabledByDefault,readonly) NSNumber * enabledByDefault; 
@property (getter=isEnterpriseManaged,readonly) BOOL enterpriseManaged; 
@property (getter=isWatchKitExtension,readonly) BOOL watchKitExtension; 
@property (getter=isSystemPlaceholder,readonly) BOOL systemPlaceholder; 
@property (readonly) char modeOfOperation; 
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;                                                     //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
+(id)new;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 auditToken:(SCD_Struct_SW0)arg4 error:(id*)arg5 ;
+(BOOL)supportsSecureCoding;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)setDeveloperModeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(const SCD_Struct_SW0*)arg4 error:(id*)arg5 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 auditToken:(SCD_Struct_SW0)arg3 error:(id*)arg4 ;
+(BOOL)auditTokenHasReadAccess:(SCD_Struct_SW0)arg1 ;
+(BOOL)auditTokenHasWriteAccess:(SCD_Struct_SW0)arg1 ;
+(BOOL)currentProcessHasReadAccess;
+(BOOL)currentProcessHasWriteAccess;
+(BOOL)isDeveloperModeEnabled;
-(BOOL)isSystemApplication;
-(BOOL)isUpdating;
-(BOOL)isAlwaysEnabled;
-(_SWCServiceSpecifier *)serviceSpecifier;
-(BOOL)isSystemPlaceholder;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(char)modeOfOperation;
-(unsigned char)userApprovalState;
-(BOOL)isApproved;
-(id)redactedDescription;
-(void)setUserApprovalState:(unsigned char)arg1 ;
-(id)_initWithServiceSpecifier:(id)arg1 fields:(const SWCFields*)arg2 ;
-(BOOL)setUserApprovalState:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)isEnabledByDefault;
-(unsigned char)siteApprovalState;
-(unsigned char)frameworkApprovalState;
-(void)waitForSiteApprovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wasReadFromDisk;
-(BOOL)wasReadFromAlternateLocationOnDisk;
-(BOOL)isWatchKitExtension;
-(BOOL)isEnterpriseManaged;
@end

