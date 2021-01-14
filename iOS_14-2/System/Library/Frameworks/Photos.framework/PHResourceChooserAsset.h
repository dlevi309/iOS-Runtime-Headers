/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSManagedObjectID, NSData, NSManagedObjectContext;


@protocol PHResourceChooserAsset <PLAssetID>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSData * imageRequestHints; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) BOOL hasAdjustments; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContextForFetchingResources; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long effectiveThumbnailIndex; 
@property (nonatomic,readonly) BOOL isRAWPlusJPEG; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@required
-(long long)mediaType;
-(unsigned long long)originalResourceChoice;
-(unsigned long long)effectiveThumbnailIndex;
-(NSData *)imageRequestHints;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;
-(BOOL)isRAWPlusJPEG;
-(NSManagedObjectID *)objectID;
-(unsigned long long)pixelHeight;
-(BOOL)hasAdjustments;
-(unsigned long long)pixelWidth;

@end

