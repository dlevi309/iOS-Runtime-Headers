/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableRecording.h>

@class NSDate, NSString, CLLocation, AVAsset, CSSearchableItem, NSURL;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording> {

	AVAsset* _avAsset;
	BOOL _pathWasInvalid;
	BOOL _ignoreChangeForEntityRevision;
	BOOL _hasPendingChangeAffectingEntityRevision;
	long long revisionID;

}

@property (nonatomic,copy,readonly) CSSearchableItem * searchableItem; 
@property (assign,nonatomic) long long recordingID; 
@property (assign,nonatomic) long long revisionID; 
@property (nonatomic,readonly) BOOL hasPendingChangeAffectingEntityRevision;              //@synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy) NSDate * evictionDate; 
@property (nonatomic,copy) NSString * path; 
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
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,readonly) BOOL uploaded; 
@property (nonatomic,readonly) AVAsset * avAsset; 
@property (nonatomic,readonly) id<RCFolder> folder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesAffectingEntityRevision;
+(id)localizedStringForRecordingLabel:(long long)arg1 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(void)awakeFromFetch;
-(void)setFavorite:(BOOL)arg1 ;
-(void)awakeFromInsert;
-(void)willSave;
-(void)setWatchOS:(BOOL)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(BOOL)downloading;
-(void)setPlayable:(BOOL)arg1 ;
-(NSURL *)URIRepresentation;
-(void)setDuration:(double)arg1 ;
-(BOOL)enhanced;
-(id)subjectForActivityType:(id)arg1 ;
-(BOOL)musicMemo;
-(CLLocation *)location;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)deleted;
-(NSString *)path;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(long long)revisionID;
-(BOOL)watchOS;
-(NSString *)titleDisallowingEmptyString;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(NSURL *)url;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(void)setRecordedOnWatch:(BOOL)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)name;
-(void)setLabelPreset:(long long)arg1 ;
-(long long)labelPreset;
-(void)setRecordingID:(long long)arg1 ;
-(BOOL)hasPendingChangeAffectingEntityRevision;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(void)setEnhanced:(BOOL)arg1 ;
-(long long)recordingID;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1 ;
-(NSDate *)evictionDate;
-(void)_validatePath;
-(CSSearchableItem *)searchableItem;
-(BOOL)uploaded;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(BOOL)recordedOnWatch;
-(void)setRevisionID:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(AVAsset *)avAsset;
-(BOOL)manuallyRenamed;
-(BOOL)favorite;
-(BOOL)playable;
-(double)duration;
-(void)setDownloading:(BOOL)arg1 ;
-(id)detailLabel;
-(void)setMusicMemo:(BOOL)arg1 ;
-(id)itemForActivityType:(id)arg1 ;
-(id)label;
-(BOOL)isContentBeingModified;
-(NSString *)title;
@end

