/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

