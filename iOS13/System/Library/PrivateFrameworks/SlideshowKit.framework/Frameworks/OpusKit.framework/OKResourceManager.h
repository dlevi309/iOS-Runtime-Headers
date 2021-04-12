/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class OFLRUCache, OKPresentationViewControllerProxy, NSArray;

@interface OKResourceManager : NSObject {

	OFLRUCache* _resources;
	OKPresentationViewControllerProxy* _presentationViewController;
	NSArray* _resourceLoaders;

}
-(void)dealloc;
-(id)initWithPresentationViewController:(id)arg1 ;
-(id)resourceLoaderForURL:(id)arg1 ;
-(id)resourceWithURL:(id)arg1 copy:(BOOL)arg2 ;
@end

