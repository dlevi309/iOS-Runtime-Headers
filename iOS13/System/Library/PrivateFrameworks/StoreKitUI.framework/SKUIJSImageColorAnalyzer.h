/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIJSImageColorAnalyzer.h>

@protocol SKUIJSImageColorAnalyzer <JSExport>
@required
-(void)analyzeImageAtUrl:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext, NSMutableDictionary, NSOperationQueue, SKUIResourceLoader, NSString;

@interface SKUIJSImageColorAnalyzer : IKJSObject <SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer> {

	SKUIClientContext* _clientContext;
	NSMutableDictionary* _artworkRequestIDsToManagedCallbacks;
	NSOperationQueue* _operationQueue;
	SKUIResourceLoader* _resourceLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(void)analyzeImageAtUrl:(id)arg1 :(id)arg2 ;
@end

