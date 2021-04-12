/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface _MXAssetStorage : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableDictionary* _storage;
	NSMutableSet* _loadingKeys;
	NSMutableDictionary* _fetchBlocks;

}
-(id)init;
-(void)setAsset:(id)arg1 forKey:(id)arg2 ;
-(void)fetchAssetForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadAssetForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

