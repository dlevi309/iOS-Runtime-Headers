/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class MiroAutoEditController, Project, MiroPickList, PHAssetCollection, MiroBlueprint, NSDictionary, NSURL;


@protocol PMDebugCollectionViewControllerProtocol <NSObject>
@property (nonatomic,readonly) MiroAutoEditController * autoEditController; 
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroPickList * picklist; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection; 
@property (nonatomic,readonly) MiroBlueprint * blueprint; 
@property (nonatomic,readonly) NSDictionary * freezeRanges; 
@property (nonatomic,readonly) NSURL * localPersistentFile; 
@property (nonatomic,readonly) Buckets buckets; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long pickedItemCount; 
@property (nonatomic,readonly) long long allAssetCount; 
@required
-(MiroBlueprint *)blueprint;
-(Buckets)buckets;
-(PHAssetCollection *)assetCollection;
-(double)duration;
-(Project *)project;
-(MiroPickList *)picklist;
-(MiroAutoEditController *)autoEditController;
-(NSDictionary *)freezeRanges;
-(NSURL *)localPersistentFile;
-(long long)pickedItemCount;
-(long long)allAssetCount;

@end

