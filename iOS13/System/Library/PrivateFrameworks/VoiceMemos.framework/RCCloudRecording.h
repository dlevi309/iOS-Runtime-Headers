/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableRecording.h>

@class AVAsset, NSData, NSString, NSDate, NSNumber, NSURL, CLLocation;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording> {

	AVAsset* _avAsset;

}

@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * audioDigest; 
@property (nonatomic,retain) id<_NSFileBackedFuture> audioFuture; 
@property (nonatomic,retain) AVAsset * avAsset;                                          //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,copy) NSString * uniqueID; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * evictionDate; 
@property (nonatomic,copy) NSString * customLabel; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,nonatomic) BOOL synced; 
@property (assign,nonatomic) BOOL pendingRestore; 
@property (assign,nonatomic) BOOL evicted; 
@property (nonatomic,readonly) NSNumber * purgeableAudioFileSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) BOOL manuallyRenamed; 
@property (nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) BOOL downloading; 
@property (assign,nonatomic) BOOL recordedOnWatch; 
@property (nonatomic,readonly) BOOL uploaded; 
+(void)initialize;
+(id)playablePredicate;
+(BOOL)isRecordingPurgeable:(id)arg1 ;
+(BOOL)setPurgeable:(BOOL)arg1 recordingURL:(id)arg2 error:(id*)arg3 ;
+(id)cacheDeletedOnWatchPredicate;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(id)name;
-(void)setName:(id)arg1 ;
-(NSString *)path;
-(NSURL *)url;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CLLocation *)location;
-(NSURL *)URIRepresentation;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(id)_detailLabel;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)willSave;
-(BOOL)uploaded;
-(id)searchableItem;
-(AVAsset *)avAsset;
-(BOOL)synced;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(BOOL)playable;
-(void)setAvAsset:(AVAsset *)arg1 ;
-(void)setSynced:(BOOL)arg1 ;
-(BOOL)pendingRestore;
-(void)setPendingRestore:(BOOL)arg1 ;
-(void)setEvicted:(BOOL)arg1 ;
-(BOOL)synchronizeRecordingMetadata:(id*)arg1 ;
-(BOOL)isContentBeingModified;
-(NSString *)titleDisallowingEmptyString;
-(BOOL)manuallyRenamed;
-(BOOL)evicted;
-(BOOL)downloading;
-(BOOL)recordedOnWatch;
-(void)setRecordedOnWatch:(BOOL)arg1 ;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(void)_validatePath;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(void)_updateAudioFuture:(id)arg1 ;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)synchronizeWithExistingAudioFuture:(id*)arg1 ;
-(NSNumber *)purgeableAudioFileSize;
-(id)purgeAudioFileWithModel:(id)arg1 error:(id*)arg2 ;
@end

