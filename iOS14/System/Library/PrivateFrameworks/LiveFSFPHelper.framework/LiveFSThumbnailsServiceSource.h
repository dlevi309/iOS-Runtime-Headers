/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)thumbnailCache;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(void)getThumbnailURLForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getThumbnailCacheURLWrappersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 ;
@end

