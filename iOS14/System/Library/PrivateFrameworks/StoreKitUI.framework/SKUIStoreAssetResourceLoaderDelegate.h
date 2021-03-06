/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSURL, NSOperationQueue, SKUIClientContext, NSString;

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	BOOL _isITunesStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSOperationQueue* _operationQueue;
	BOOL _shouldUseITunesStoreSecureKeyDelivery;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

