/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSAppInfoFetching.h>

@class NSCache, NSString;

@interface CPSAppInfoFetcher : NSObject <CPSAppInfoFetching> {

	NSCache* _appMetadataByBundleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedAMSBag;
+(id)_cachedIconFileURLForItemID:(id)arg1 ;
-(id)init;
-(void)lookUpClipMetadataByBundleID:(id)arg1 sourceBundleID:(id)arg2 downloadIconIfNeeded:(BOOL)arg3 skipCaching:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_downloadIconIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_lookUpClipDemoAMSMetadataWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

