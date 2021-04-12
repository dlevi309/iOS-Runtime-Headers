/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SOExtensionFinder : NSObject {

	NSObject*<OS_dispatch_queue> _extensionFinderQueue;
	id _matchingContext;

}
-(id)init;
-(void)endMatchingExtensions;
-(void)findExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)findExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)beginMatchingExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_didFindExtensions:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_soExtensionsForExtensions:(id)arg1 ;
@end

