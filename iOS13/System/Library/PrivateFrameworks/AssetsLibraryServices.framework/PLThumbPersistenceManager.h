/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

@class NSString;


@protocol PLThumbPersistenceManager <NSObject>
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) BOOL isReadOnly; 
@optional
-(id)thumbnailPathForThumbIdentifier:(id)arg1;
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;

@required
-(NSString *)path;
-(BOOL)isReadOnly;
-(id)_debugDescription;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
-(BOOL)usesThumbIdentifiers;
-(void)preheatDataForThumbnailIndexes:(id)arg1;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3;

@end

