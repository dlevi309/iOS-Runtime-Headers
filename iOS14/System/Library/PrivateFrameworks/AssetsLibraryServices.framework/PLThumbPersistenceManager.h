/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

@class NSString;


@protocol PLThumbPersistenceManager <NSObject>
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) BOOL isReadOnly; 
@optional
-(id)thumbnailPathForThumbIdentifier:(id)arg1;
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;

@required
-(BOOL)isReadOnly;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
-(NSString *)path;
-(BOOL)usesThumbIdentifiers;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2;
-(id)_debugDescription;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
-(void)preheatDataForThumbnailIndexes:(id)arg1;

@end

