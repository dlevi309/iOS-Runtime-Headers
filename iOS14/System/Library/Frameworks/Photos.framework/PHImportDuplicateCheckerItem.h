/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)assetId;
-(id)uuid;
-(NSURL *)url;
-(BOOL)isLivePhoto;
-(NSString *)fileName;
-(NSDate *)fileCreationDate;
-(id)nameKey;
-(id)sizeKey;
-(NSDate *)dateKey;
-(void)setDuplicates:(id)arg1 forLibrary:(id)arg2;
-(id)duplicateAssetsForLibrary:(id)arg1;
-(void)loadMetadataSync;
-(id)avchdAssetId;
-(id)originatingAssetID;
-(NSDate *)exifImageDate;
-(BOOL)isDuplicate;
-(void)setIsDuplicate:(BOOL)arg1;
-(NSDate *)lastDuplicateCheck;
-(void)setLastDuplicateCheck:(id)arg1;
-(id<PHImportDuplicateCheckerItem>)videoComplement;
-(NSMutableDictionary *)duplicates;
-(void)setDuplicates:(id)arg1;
-(unsigned char)duplicateStateConfidence;
-(void)setDuplicateStateConfidence:(unsigned char)arg1;
-(IPAMetadata *)metadata;

@end

