/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXGalleryItemImageViewFactory.h>

@protocol SXGalleryItemImageViewFactory <NSObject>
@required
-(id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2;

@end


@protocol SXResourceDataSourceProvider, SWReachabilityProvider;
@class NSString;

@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory> {

	id<SXResourceDataSourceProvider> _resourceDataSourceProvider;
	id<SWReachabilityProvider> _reachabilityProvider;

}

@property (nonatomic,readonly) id<SXResourceDataSourceProvider> resourceDataSourceProvider;              //@synthesize resourceDataSourceProvider=_resourceDataSourceProvider - In the implementation block
@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                          //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2 ;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(id<SXResourceDataSourceProvider>)resourceDataSourceProvider;
-(id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2 ;
@end

