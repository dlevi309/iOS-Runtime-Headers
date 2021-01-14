/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableRecording.h>

@class AVAsset, NSString, NSData, NSNumber, NSDate, CLLocation, NSURL;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording> {

	AVAsset* _avAsset;

}

@property (nonatomic,retain) NSString * encryptedTitle; 
@property (assign,nonatomic) unsigned long long flags; 
@property (assign,nonatomic) unsigned long long sharedFlags; 
@property (nonatomic,retain) NSData * audioDigest; 
@property (nonatomic,retain) id<_NSFileBackedFuture> audioFuture; 
@property (nonatomic,retain) AVAsset * avAsset;                                          //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,readonly) NSNumber * purgeableAudioFileSize; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * evictionDate; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * customLabel; 
@property (nonatomic,copy) NSString * uniqueID; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,nonatomic) BOOL synced; 
@property (assign,nonatomic) BOOL pendingRestore; 
@property (assign,nonatomic) BOOL playable; 
@property (assign,nonatomic) BOOL manuallyRenamed; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL downloading; 
@property (assign,nonatomic) BOOL recordedOnWatch; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL enhanced; 
@property (assign,nonatomic) BOOL watchOS; 
@property (assign,nonatomic) BOOL musicMemo; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,readonly) BOOL uploaded; 
@property (nonatomic,readonly) id<RCFolder> folder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)playablePredicate;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(BOOL)isRecordingPurgeable:(id)arg1 ;
+(BOOL)setPurgeable:(BOOL)arg1 recordingURL:(id)arg2 error:(id*)arg3 ;
+(id)cacheDeletedOnWatchPredicate;
+(id)favoritePredicate;
+(id)watchOSPredicate;
+(id)musicMemoPredicate;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(void)awakeFromFetch;
-(void)setFavorite:(BOOL)arg1 ;
-(void)awakeFromInsert;
-(void)willSave;
-(void)setWatchOS:(BOOL)arg1 ;
-(BOOL)synced;
-(BOOL)downloading;
-(void)setPlayable:(BOOL)arg1 ;
-(NSURL *)URIRepresentation;
-(void)setDuration:(double)arg1 ;
-(id)_detailLabel;
-(BOOL)enhanced;
-(id)subjectForActivityType:(id)arg1 ;
-(BOOL)musicMemo;
-(CLLocation *)location;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)deleted;
-(NSString *)path;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(BOOL)watchOS;
-(NSString *)titleDisallowingEmptyString;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(NSURL *)url;
-(void)_updateAudioFuture:(id)arg1 ;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(void)setRecordedOnWatch:(BOOL)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)name;
-(void)setPendingRestore:(BOOL)arg1 ;
-(NSNumber *)purgeableAudioFileSize;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(void)setEnhanced:(BOOL)arg1 ;
-(BOOL)copyPropertiesFromOriginalRecording:(id)arg1 error:(id*)arg2 ;
-(void)setSynced:(BOOL)arg1 ;
-(void)_validatePath;
-(void)setAvAsset:(AVAsset *)arg1 ;
-(id)searchableItem;
-(BOOL)uploaded;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(BOOL)recordedOnWatch;
-(BOOL)validateForInsert:(id*)arg1 ;
-(void)setName:(id)arg1 ;
-(BOOL)synchronizeWithExistingAudioFuture:(id*)arg1 ;
-(BOOL)pendingRestore;
-(AVAsset *)avAsset;
-(BOOL)manuallyRenamed;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)favorite;
-(BOOL)playable;
-(void)synchronizeRecordingMetadata;
-(id)purgeAudioFileWithModel:(id)arg1 error:(id*)arg2 ;
-(void)setDownloading:(BOOL)arg1 ;
-(void)setMusicMemo:(BOOL)arg1 ;
-(id)itemForActivityType:(id)arg1 ;
-(BOOL)isContentBeingModified;
-(NSString *)title;
@end

