/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <libobjc.A.dylib/CPLChangeSessionImplementation.h>

@class NSString;

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispatchBlockWhenLibraryIsOpen:(/*^block*/id)arg1 ;
-(id)proxyLibraryManager;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

