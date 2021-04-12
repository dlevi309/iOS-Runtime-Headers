/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface REAppIconCache : RESingleton {

	NSCache* _imageCache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_init;
-(void)_loadRemoteIconForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadIconForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)iconForApplicationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

