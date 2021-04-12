/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/QLThumbnailCache.h>

@class LiveFSFPExtensionHelper, QLExternalThumbnailCache, NSString;

@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache> {

	LiveFSFPExtensionHelper* ex;
	QLExternalThumbnailCache* thumbnailCache;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(id)thumbnailCache;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getThumbnailURLForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getThumbnailCacheURLWrappersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 ;
@end

