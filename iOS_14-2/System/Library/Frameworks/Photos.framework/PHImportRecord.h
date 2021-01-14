/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHImportExceptionRecorder.h>

@class NSString, PHImportAsset, NSMutableArray, PHImportTimerCollection;

@interface PHImportRecord : PHImportExceptionRecorder {

	NSString* _rawAssetIdentifier;
	BOOL _referencedImport;
	unsigned char _importType;
	NSString* _assetIdentifier;
	PHImportAsset* _importAsset;
	NSMutableArray* _relatedRecords;
	NSString* _downloadedPath;
	PHImportTimerCollection* _timers;

}

@property (nonatomic,retain) NSMutableArray * relatedRecords;               //@synthesize relatedRecords=_relatedRecords - In the implementation block
@property (assign,nonatomic) BOOL referencedImport;                         //@synthesize referencedImport=_referencedImport - In the implementation block
@property (nonatomic,retain) NSString * assetIdentifier;                    //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * rawAssetIdentifier; 
@property (nonatomic,retain) PHImportAsset * importAsset;                   //@synthesize importAsset=_importAsset - In the implementation block
@property (nonatomic,retain) NSString * downloadedPath;                     //@synthesize downloadedPath=_downloadedPath - In the implementation block
@property (nonatomic,retain) PHImportTimerCollection * timers;              //@synthesize timers=_timers - In the implementation block
@property (assign,nonatomic) unsigned char importType;                      //@synthesize importType=_importType - In the implementation block
@property (readonly) BOOL canReference; 
-(void)setTimers:(PHImportTimerCollection *)arg1 ;
-(id)description;
-(PHImportTimerCollection *)timers;
-(id)initWithImportAsset:(id)arg1 ;
-(id)descriptionWithPrefix:(id)arg1 ;
-(void)cleanupAfterFailure;
-(id)allAssetIdentifiers;
-(NSString *)rawAssetIdentifier;
-(void)addRelatedRecord:(id)arg1 ;
-(id)recordForAsset:(id)arg1 ;
-(id)allImportAssets;
-(id)allImportRecords;
-(BOOL)needsDownload;
-(BOOL)canReference;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(PHImportAsset *)importAsset;
-(void)setImportAsset:(PHImportAsset *)arg1 ;
-(NSMutableArray *)relatedRecords;
-(void)setRelatedRecords:(NSMutableArray *)arg1 ;
-(BOOL)referencedImport;
-(void)setReferencedImport:(BOOL)arg1 ;
-(NSString *)downloadedPath;
-(void)setDownloadedPath:(NSString *)arg1 ;
-(unsigned char)importType;
-(void)setImportType:(unsigned char)arg1 ;
@end

