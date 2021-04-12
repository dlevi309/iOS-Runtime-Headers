/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableRecording.h>
#import <UIKit/UIActivityItemSource.h>

@class NSDate, NSString, CLLocation, AVAsset, CSSearchableItem, NSURL;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording, UIActivityItemSource> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSDate * evictionDate; 
@property (nonatomic,copy,readonly) NSString * path; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,copy,readonly) NSString * customLabel; 
@property (nonatomic,copy,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) long long iTunesPersistentID; 
@property (nonatomic,readonly) BOOL synced; 
@property (nonatomic,readonly) BOOL pendingRestore; 
@property (nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) BOOL manuallyRenamed; 
@property (nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) BOOL evicted; 
@property (nonatomic,readonly) BOOL downloading; 
@property (assign,nonatomic) BOOL recordedOnWatch; 
@property (nonatomic,readonly) BOOL uploaded; 
@property (nonatomic,readonly) AVAsset * avAsset; 
+(id)localizedStringForRecordingLabel:(long long)arg1 ;
+(id)propertiesAffectingEntityRevision;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(NSString *)path;
-(NSURL *)url;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(CLLocation *)location;
-(id)label;
-(NSURL *)URIRepresentation;
-(void)setDuration:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)willSave;
-(BOOL)uploaded;
-(long long)revisionID;
-(void)setRevisionID:(long long)arg1 ;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id)detailLabel;
-(CSSearchableItem *)searchableItem;
-(AVAsset *)avAsset;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(BOOL)playable;
-(long long)recordingID;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1 ;
-(NSDate *)evictionDate;
-(BOOL)isContentBeingModified;
-(NSString *)titleDisallowingEmptyString;
-(BOOL)manuallyRenamed;
-(BOOL)evicted;
-(BOOL)downloading;
-(BOOL)recordedOnWatch;
-(void)setRecordedOnWatch:(BOOL)arg1 ;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(void)setLabelPreset:(long long)arg1 ;
-(void)_validatePath;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(long long)labelPreset;
-(void)setRecordingID:(long long)arg1 ;
-(BOOL)hasPendingChangeAffectingEntityRevision;
@end

