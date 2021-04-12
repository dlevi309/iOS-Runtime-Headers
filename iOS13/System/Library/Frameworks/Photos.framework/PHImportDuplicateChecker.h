/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class NSMutableDictionary, NSDate, NSMutableSet, PFDispatchQueue, PHPhotoLibrary, NSString;

@interface PHImportDuplicateChecker : NSObject <PHPhotoLibraryChangeObserver> {

	NSMutableDictionary* _avchdAssetIdentifierCache;
	NSMutableDictionary* _sizeNameCache;
	NSMutableDictionary* _assetIdentifierCache;
	NSMutableDictionary* _dupInfoByObjectID;
	NSDate* _lastChange;
	NSMutableSet* _updatedDupInfos;
	PFDispatchQueue* _queue;
	PHPhotoLibrary* _library;
	NSMutableDictionary* _foundPPTData;
	NSMutableDictionary* _notFoundPPTData;
	NSMutableDictionary* _generatedPPTData;

}

@property (retain) PFDispatchQueue * queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * foundPPTData;                  //@synthesize foundPPTData=_foundPPTData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notFoundPPTData;               //@synthesize notFoundPPTData=_notFoundPPTData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * generatedPPTData;              //@synthesize generatedPPTData=_generatedPPTData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)dateWithDate:(id)arg1 ;
+(id)fetchAssetsFromLibrary:(id)arg1 withPredicates:(id)arg2 ;
+(id)duplicateCheckerForClient:(id)arg1 andLibrary:(id)arg2 ;
+(id)doneWithDuplicateCheckerForLibrary:(id)arg1 forClient:(id)arg2 ;
+(void)addLibrary:(id)arg1 ;
+(void)removeLibrary:(id)arg1 ;
-(void)setQueue:(PFDispatchQueue *)arg1 ;
-(PFDispatchQueue *)queue;
-(PHPhotoLibrary *)library;
-(id)initWithLibrary:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(unsigned long long)populateCachesWithAssetsInfos:(id)arg1 ;
-(void)updateAssetsFromDupInfos;
-(void)setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3 ;
-(void)populateCachesWithAssetInfo:(id)arg1 ;
-(void)removeDuplicateInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3 ;
-(void)dePopulateCachesWithObjectID:(id)arg1 ;
-(id)filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(BOOL)arg3 ;
-(id)findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id*)arg3 confidence:(unsigned char*)arg4 ;
-(BOOL)findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(BOOL)arg4 ;
-(void)recordTimeSinceStart:(double)arg1 inData:(id)arg2 forKey:(id)arg3 ;
-(id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2 ;
-(void)checkForDuplicates:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(/*^block*/id)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)getAssetObjectIdsFromObjectIds:(id)arg1 ;
-(id)generatePPTData;
-(void)setLibrary:(PHPhotoLibrary *)arg1 ;
-(NSMutableDictionary *)foundPPTData;
-(void)setFoundPPTData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notFoundPPTData;
-(void)setNotFoundPPTData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)generatedPPTData;
-(void)setGeneratedPPTData:(NSMutableDictionary *)arg1 ;
@end

