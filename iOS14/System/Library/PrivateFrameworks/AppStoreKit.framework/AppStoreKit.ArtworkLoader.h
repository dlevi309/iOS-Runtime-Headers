/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/ASKImageRequestDelegate.h>

@interface AppStoreKit.ArtworkLoader : _UKNOWN_SUPERCLASS_ <ASKImageRequestDelegate> {

	 resourceLoader;
	 accessQueue;
	 completionHandlers;
	 requestCompletionMap;
	 isOccluded;
	 assetObserver;

}
-(void)resourceLoaderDidIdle;
-(void)resourceLoaderDidLoadAllForReason:(id)arg1 ;
-(void)imageRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)imageRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)resourceLoaderDidBeginLoading;
@end

