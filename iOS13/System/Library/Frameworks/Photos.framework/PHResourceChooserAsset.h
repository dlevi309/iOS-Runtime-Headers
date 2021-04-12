/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL isRAWPlusJPEG; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@required
-(NSManagedObjectID *)objectID;
-(long long)mediaType;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(BOOL)hasAdjustments;
-(unsigned long long)originalResourceChoice;
-(BOOL)isRAWPlusJPEG;
-(NSData *)imageRequestHints;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;

@end

