/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)imageRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)imageRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)resourceLoaderDidBeginLoading;
-(void)resourceLoaderDidLoadAllForReason:(id)arg1 ;
-(void)resourceLoaderDidIdle;
@end

