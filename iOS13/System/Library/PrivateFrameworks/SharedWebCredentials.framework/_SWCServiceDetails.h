/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SWCServiceSpecifier;

@interface _SWCServiceDetails : NSObject <NSSecureCoding> {

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
@property (getter=isAlwaysEnabled,readonly) BOOL alwaysEnabled; 
@property (getter=isEnterpriseManaged,readonly) BOOL enterpriseManaged; 
@property (getter=isWatchKitExtension,readonly) BOOL watchKitExtension; 
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;                        //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAlwaysEnabled;
-(BOOL)isApproved;
-(_SWCServiceSpecifier *)serviceSpecifier;
-(id)_initWithServiceSpecifier:(id)arg1 fields:(const SWCFields*)arg2 ;
-(BOOL)isUpdating;
-(BOOL)wasReadFromDisk;
-(BOOL)isWatchKitExtension;
-(BOOL)isEnterpriseManaged;
-(BOOL)setUserApprovalState:(unsigned char)arg1 error:(id*)arg2 ;
-(unsigned char)userApprovalState;
-(void)setUserApprovalState:(unsigned char)arg1 ;
-(unsigned char)siteApprovalState;
-(unsigned char)frameworkApprovalState;
-(void)waitForSiteApprovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSystemApplication;
@end

