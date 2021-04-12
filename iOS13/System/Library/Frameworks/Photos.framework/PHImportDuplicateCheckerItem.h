/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSURL, NSString, NSDate, NSMutableDictionary, IPAMetadata;


@protocol PHImportDuplicateCheckerItem <NSObject>
@property (readonly) id uuid; 
@property (readonly) NSURL * url; 
@property (readonly) id avchdAssetId; 
@property (readonly) id assetId; 
@property (readonly) id originatingAssetID; 
@property (readonly) NSString * fileName; 
@property (readonly) NSDate * exifImageDate; 
@property (readonly) NSDate * fileCreationDate; 
@property (readonly) id nameKey; 
@property (readonly) id sizeKey; 
@property (readonly) NSDate * dateKey; 
@property (assign) BOOL isDuplicate; 
@property (readonly) BOOL isLivePhoto; 
@property (retain) NSDate * lastDuplicateCheck; 
@property (readonly) id<PHImportDuplicateCheckerItem> videoComplement; 
@property (retain) NSMutableDictionary * duplicates; 
@property (assign) unsigned char duplicateStateConfidence; 
@property (readonly) IPAMetadata * metadata; 
@required
-(NSDate *)fileCreationDate;
-(NSURL *)url;
-(id)uuid;
-(IPAMetadata *)metadata;
-(id)assetId;
-(NSString *)fileName;
-(id)originatingAssetID;
-(id<PHImportDuplicateCheckerItem>)videoComplement;
-(void)setDuplicates:(id)arg1 forLibrary:(id)arg2;
-(id)duplicateAssetsForLibrary:(id)arg1;
-(void)loadMetadataSync;
-(id)avchdAssetId;
-(NSDate *)exifImageDate;
-(id)nameKey;
-(id)sizeKey;
-(NSDate *)dateKey;
-(BOOL)isDuplicate;
-(void)setIsDuplicate:(BOOL)arg1;
-(BOOL)isLivePhoto;
-(NSDate *)lastDuplicateCheck;
-(void)setLastDuplicateCheck:(id)arg1;
-(NSMutableDictionary *)duplicates;
-(void)setDuplicates:(id)arg1;
-(unsigned char)duplicateStateConfidence;
-(void)setDuplicateStateConfidence:(unsigned char)arg1;

@end

