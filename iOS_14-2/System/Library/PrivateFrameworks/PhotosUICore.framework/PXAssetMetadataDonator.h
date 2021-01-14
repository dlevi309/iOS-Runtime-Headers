/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSMutableDictionary;

@interface PXAssetMetadataDonator : NSObject {

	NSCountedSet* _locationDescriptions;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSMutableDictionary* _locationDescriptionsByAssetLocalIdentifiers;

}

@property (nonatomic,retain) NSCountedSet * locationDescriptions;                                            //@synthesize locationDescriptions=_locationDescriptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueue;                                   //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationDescriptionsByAssetLocalIdentifiers;              //@synthesize locationDescriptionsByAssetLocalIdentifiers=_locationDescriptionsByAssetLocalIdentifiers - In the implementation block
+(id)new;
+(id)sharedDonator;
-(void)setLocationDescriptionsByAssetLocalIdentifiers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)donateMetadataForAsset:(id)arg1 ;
-(void)setLocationDescriptions:(NSCountedSet *)arg1 ;
-(NSMutableDictionary *)locationDescriptionsByAssetLocalIdentifiers;
-(void)_notifyWhenDonationIsComplete:(/*^block*/id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(NSCountedSet *)locationDescriptions;
-(void)setBackgroundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)donate:(id)arg1 ;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
@end

