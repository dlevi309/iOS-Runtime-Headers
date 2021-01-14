/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject, PLAssetsdPrivacySupportClient;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _authRightFullAccess;
	long long _authRightAddOnly;
	PLAssetsdPrivacySupportClient* _privacySupportClient;
	BOOL _hasHandledLimitedLibraryReprompt;
	BOOL _limitedLibrarySupported;

}

@property (assign) BOOL hasHandledLimitedLibraryReprompt;                                                //@synthesize hasHandledLimitedLibraryReprompt=_hasHandledLimitedLibraryReprompt - In the implementation block
@property (assign,getter=isLimitedLibrarySupported,nonatomic) BOOL limitedLibrarySupported;              //@synthesize limitedLibrarySupported=_limitedLibrarySupported - In the implementation block
+(id)sharedInstance;
+(BOOL)_isLimitedLibrarySupportedInClient;
-(void)setLimitedLibrarySupported:(BOOL)arg1 ;
-(void)_resolvePreflightStatusForScope:(long long)arg1 ;
-(id)init;
-(void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 synchronous:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setHasHandledLimitedLibraryReprompt:(BOOL)arg1 ;
-(void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1 ;
-(BOOL)hasHandledLimitedLibraryReprompt;
-(void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
-(long long)photosAccessAllowedWithScope:(long long)arg1 ;
-(long long)_authStatusForScope:(long long)arg1 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(SCD_Struct_PL11)arg2 clientAuthorization:(id)arg3 ;
-(void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isLimitedLibrarySupported;
-(void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)checkPhotosAccessAllowedWithScope:(long long)arg1 ;
-(void)_setAuthStatus:(long long)arg1 scope:(long long)arg2 ;
@end

