/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SOExtensionFinder : NSObject {

	NSObject*<OS_dispatch_queue> _extensionFinderQueue;
	id _matchingContext;

}
-(id)init;
-(id)_soExtensionsForExtensions:(id)arg1 ;
-(void)findExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)beginMatchingExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)findExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endMatchingExtensions;
@end

