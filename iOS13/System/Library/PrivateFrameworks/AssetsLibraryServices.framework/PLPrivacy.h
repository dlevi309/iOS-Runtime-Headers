/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _authStatusFullAccess;
	int _authStatusSaveOnly;

}
+(id)sharedInstance;
-(id)init;
-(void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isPhotosTCCAccessAllowed;
-(BOOL)isPhotosTCCAccessRestricted;
-(int)photosTCCAccessStatus;
-(CFStringRef)_TCCForScope:(long long)arg1 ;
-(void)_setPreflightStatusForScope:(long long)arg1 ;
-(void)_setAuthStatus:(int)arg1 scope:(long long)arg2 ;
-(int)_authStatusForScope:(long long)arg1 ;
-(BOOL)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(/*^block*/id)arg3 ;
-(BOOL)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(/*^block*/id)arg2 ;
-(BOOL)isPhotosTCCAccessNotAllowed;
@end

