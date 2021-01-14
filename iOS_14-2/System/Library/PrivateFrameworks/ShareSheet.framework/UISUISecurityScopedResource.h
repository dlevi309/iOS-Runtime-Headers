/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, FPSandboxingURLWrapper;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding> {

	BOOL _hasActiveAccessAssertion;
	NSURL* _url;
	long long _allowedAccess;
	FPSandboxingURLWrapper* _sandboxExtensionWrapper;
	long long _underlyingSandboxAssertionHandle;

}

@property (nonatomic,retain) FPSandboxingURLWrapper * sandboxExtensionWrapper;              //@synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper - In the implementation block
@property (assign,nonatomic) long long allowedAccess;                                       //@synthesize allowedAccess=_allowedAccess - In the implementation block
@property (assign,nonatomic) BOOL hasActiveAccessAssertion;                                 //@synthesize hasActiveAccessAssertion=_hasActiveAccessAssertion - In the implementation block
@property (assign,nonatomic) long long underlyingSandboxAssertionHandle;                    //@synthesize underlyingSandboxAssertionHandle=_underlyingSandboxAssertionHandle - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isContentManaged; 
+(BOOL)supportsSecureCoding;
+(id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)readonlySandboxExtensionClassString;
+(BOOL)_isValidURLForIssuingSandboxExtension:(id)arg1 ;
+(id)_sandboxExtensionClassForAllowedAccess:(long long)arg1 ;
+(id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
+(id)readwriteSandboxExtensionClassString;
+(id)uniquedSecurityScopedResources:(id)arg1 ;
+(id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
+(id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2 ;
-(void)stopAccessing;
-(BOOL)isContentManaged;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3 ;
-(long long)allowedAccess;
-(BOOL)hasActiveAccessAssertion;
-(void)setHasActiveAccessAssertion:(BOOL)arg1 ;
-(BOOL)_isEqualAccessToSecurityScopedResource:(id)arg1 ;
-(void)startAccessing;
-(void)setAllowedAccess:(long long)arg1 ;
-(FPSandboxingURLWrapper *)sandboxExtensionWrapper;
-(void)setSandboxExtensionWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(long long)underlyingSandboxAssertionHandle;
-(void)setUnderlyingSandboxAssertionHandle:(long long)arg1 ;
-(NSURL *)url;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

