/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSURL, NSMutableDictionary, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject {

	NSURL* _persistentStoreURL;
	NSMutableDictionary* _momentAssetPairsByNodeUUID;
	NSMutableDictionary* _curationInformationByNodeUUID;
	NSMutableDictionary* _locationInformationByNodeUUID;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSURL * persistentStoreURL;                                       //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * momentAssetPairsByNodeUUID;                 //@synthesize momentAssetPairsByNodeUUID=_momentAssetPairsByNodeUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * curationInformationByNodeUUID;              //@synthesize curationInformationByNodeUUID=_curationInformationByNodeUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * locationInformationByNodeUUID;              //@synthesize locationInformationByNodeUUID=_locationInformationByNodeUUID - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(void)invalidateCache;
-(id)curationInformationForNode:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)save;
-(NSMutableDictionary *)curationInformationByNodeUUID;
-(BOOL)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2 ;
-(id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg1 withAssociatedMomentUUIDs:(id)arg2 ;
-(id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2 ;
-(void)setCurationInformation:(id)arg1 forNode:(id)arg2 ;
-(NSURL *)persistentStoreURL;
-(void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3 ;
-(void)setKeyAssetLocalIdentifier:(id)arg1 forNodeIdentifier:(id)arg2 withAssociatedMomentUUID:(id)arg3 ;
-(NSMutableDictionary *)locationInformationByNodeUUID;
-(NSMutableDictionary *)momentAssetPairsByNodeUUID;
@end

