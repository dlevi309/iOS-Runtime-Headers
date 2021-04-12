/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSDictionary, NSString, NSDate, NSArray, CLLocation, NSData, NSNumber, CPLAdjustments, CPLPlaceAnnotation, CPLFaceAnalysisReference;

@interface CPLAssetChange : CPLItemChange {

	NSDictionary* _resourcePerResourceType;
	BOOL _favorite;
	BOOL _hidden;
	NSString* _masterIdentifier;
	NSDate* _lastSharedDate;
	NSDate* _addedDate;
	NSDate* _assetDate;
	NSArray* _resources;
	NSString* _caption;
	NSString* _extendedDescription;
	long long _orientation;
	long long _duration;
	CLLocation* _location;
	NSArray* _keywords;
	NSString* _adjustedMediaMetaDataType;
	NSData* _adjustedMediaMetaData;
	NSString* _timeZoneName;
	NSNumber* _timeZoneOffset;
	NSString* _momentIdentifier;
	NSString* _momentName;
	NSString* _collectionIdentifier;
	NSString* _collectionName;
	unsigned long long _burstFlags;
	NSString* _burstIdentifier;
	NSString* _mediaGroupIdentifier;
	long long _videoComplementDurationValue;
	long long _videoComplementDurationTimescale;
	long long _videoComplementImageDisplayValue;
	long long _videoComplementImageDisplayTimescale;
	unsigned long long _videoComplementVisibilityState;
	unsigned long long _assetSubtype;
	unsigned long long _assetHDRType;
	CPLAdjustments* _adjustments;
	unsigned long long _originalChoice;
	long long _customRenderedValue;
	NSArray* _people;
	long long _facesVersion;
	NSString* _facesAdjustmentsFingerprint;
	CPLPlaceAnnotation* _placeAnnotation;
	long long _playCount;
	long long _shareCount;
	long long _viewCount;
	NSData* _facesData;

}

@property (nonatomic,copy) NSData * facesData;                                               //@synthesize facesData=_facesData - In the implementation block
@property (nonatomic,copy) NSString * masterIdentifier;                                      //@synthesize masterIdentifier=_masterIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * lastSharedDate;                                          //@synthesize lastSharedDate=_lastSharedDate - In the implementation block
@property (nonatomic,copy) NSDate * addedDate;                                               //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,copy) NSDate * assetDate;                                               //@synthesize assetDate=_assetDate - In the implementation block
@property (nonatomic,copy) NSArray * resources;                                              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSString * caption;                                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * extendedDescription;                                   //@synthesize extendedDescription=_extendedDescription - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                                //@synthesize favorite=_favorite - In the implementation block
@property (assign,nonatomic) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSString * adjustedMediaMetaDataType;                             //@synthesize adjustedMediaMetaDataType=_adjustedMediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * adjustedMediaMetaData;                                 //@synthesize adjustedMediaMetaData=_adjustedMediaMetaData - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * timeZoneName;                                          //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (nonatomic,copy) NSNumber * timeZoneOffset;                                        //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
@property (nonatomic,copy) NSString * momentIdentifier;                                      //@synthesize momentIdentifier=_momentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * momentName;                                            //@synthesize momentName=_momentName - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;                                  //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                        //@synthesize collectionName=_collectionName - In the implementation block
@property (assign,nonatomic) unsigned long long burstFlags;                                  //@synthesize burstFlags=_burstFlags - In the implementation block
@property (nonatomic,copy) NSString * burstIdentifier;                                       //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaGroupIdentifier;                                  //@synthesize mediaGroupIdentifier=_mediaGroupIdentifier - In the implementation block
@property (assign,nonatomic) long long videoComplementDurationValue;                         //@synthesize videoComplementDurationValue=_videoComplementDurationValue - In the implementation block
@property (assign,nonatomic) long long videoComplementDurationTimescale;                     //@synthesize videoComplementDurationTimescale=_videoComplementDurationTimescale - In the implementation block
@property (assign,nonatomic) long long videoComplementImageDisplayValue;                     //@synthesize videoComplementImageDisplayValue=_videoComplementImageDisplayValue - In the implementation block
@property (assign,nonatomic) long long videoComplementImageDisplayTimescale;                 //@synthesize videoComplementImageDisplayTimescale=_videoComplementImageDisplayTimescale - In the implementation block
@property (assign,nonatomic) unsigned long long videoComplementVisibilityState;              //@synthesize videoComplementVisibilityState=_videoComplementVisibilityState - In the implementation block
@property (assign,nonatomic) unsigned long long assetSubtype;                                //@synthesize assetSubtype=_assetSubtype - In the implementation block
@property (assign,nonatomic) unsigned long long assetHDRType;                                //@synthesize assetHDRType=_assetHDRType - In the implementation block
@property (nonatomic,retain) CPLAdjustments * adjustments;                                   //@synthesize adjustments=_adjustments - In the implementation block
@property (assign,nonatomic) unsigned long long originalChoice;                              //@synthesize originalChoice=_originalChoice - In the implementation block
@property (assign,nonatomic) long long customRenderedValue;                                  //@synthesize customRenderedValue=_customRenderedValue - In the implementation block
@property (nonatomic,copy) NSArray * people;                                                 //@synthesize people=_people - In the implementation block
@property (nonatomic,copy) CPLFaceAnalysisReference * faces; 
@property (assign,nonatomic) long long facesVersion;                                         //@synthesize facesVersion=_facesVersion - In the implementation block
@property (nonatomic,copy) NSString * facesAdjustmentsFingerprint;                           //@synthesize facesAdjustmentsFingerprint=_facesAdjustmentsFingerprint - In the implementation block
@property (nonatomic,retain) CPLPlaceAnnotation * placeAnnotation;                           //@synthesize placeAnnotation=_placeAnnotation - In the implementation block
@property (assign,nonatomic) long long playCount;                                            //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) long long shareCount;                                           //@synthesize shareCount=_shareCount - In the implementation block
@property (assign,nonatomic) long long viewCount;                                            //@synthesize viewCount=_viewCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)serverSupportsVision;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(/*^block*/id)equalityBlockForDirection:(unsigned long long)arg1 ;
+(/*^block*/id)copyPropertyBlockForDirection:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(long long)orientation;
-(long long)duration;
-(BOOL)isHidden;
-(CLLocation *)location;
-(void)setOrientation:(long long)arg1 ;
-(void)setFaces:(CPLFaceAnalysisReference *)arg1 ;
-(CPLFaceAnalysisReference *)faces;
-(NSArray *)people;
-(void)setDuration:(long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(NSString *)caption;
-(BOOL)isFavorite;
-(void)setCaption:(NSString *)arg1 ;
-(BOOL)supportsResources;
-(NSDate *)addedDate;
-(void)setCustomRenderedValue:(long long)arg1 ;
-(CPLPlaceAnnotation *)placeAnnotation;
-(void)setAddedDate:(NSDate *)arg1 ;
-(CPLAdjustments *)adjustments;
-(void)setFavorite:(BOOL)arg1 ;
-(long long)playCount;
-(void)setPlayCount:(long long)arg1 ;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(long long)viewCount;
-(void)setViewCount:(long long)arg1 ;
-(NSNumber *)timeZoneOffset;
-(long long)customRenderedValue;
-(void)setTimeZoneOffset:(NSNumber *)arg1 ;
-(NSString *)burstIdentifier;
-(id)masterScopedIdentifier;
-(NSDate *)assetDate;
-(NSString *)extendedDescription;
-(unsigned long long)burstFlags;
-(unsigned long long)assetSubtype;
-(long long)videoComplementDurationValue;
-(long long)videoComplementDurationTimescale;
-(long long)videoComplementImageDisplayValue;
-(long long)videoComplementImageDisplayTimescale;
-(NSString *)mediaGroupIdentifier;
-(unsigned long long)videoComplementVisibilityState;
-(void)setMasterIdentifier:(NSString *)arg1 ;
-(NSDate *)lastSharedDate;
-(void)setLastSharedDate:(NSDate *)arg1 ;
-(void)setAssetDate:(NSDate *)arg1 ;
-(void)setPlaceAnnotation:(CPLPlaceAnnotation *)arg1 ;
-(void)setExtendedDescription:(NSString *)arg1 ;
-(void)setAssetHDRType:(unsigned long long)arg1 ;
-(void)setPeople:(NSArray *)arg1 ;
-(void)setMediaGroupIdentifier:(NSString *)arg1 ;
-(void)setVideoComplementDurationValue:(long long)arg1 ;
-(void)setVideoComplementDurationTimescale:(long long)arg1 ;
-(void)setVideoComplementImageDisplayValue:(long long)arg1 ;
-(void)setVideoComplementImageDisplayTimescale:(long long)arg1 ;
-(void)setVideoComplementVisibilityState:(unsigned long long)arg1 ;
-(void)setAdjustments:(CPLAdjustments *)arg1 ;
-(void)setOriginalChoice:(unsigned long long)arg1 ;
-(void)setAdjustedMediaMetaDataType:(NSString *)arg1 ;
-(void)setAdjustedMediaMetaData:(NSData *)arg1 ;
-(void)setBurstFlags:(unsigned long long)arg1 ;
-(void)setBurstIdentifier:(NSString *)arg1 ;
-(void)setAssetSubtype:(unsigned long long)arg1 ;
-(void)setFacesAdjustmentsFingerprint:(NSString *)arg1 ;
-(void)setFacesVersion:(long long)arg1 ;
-(long long)facesVersion;
-(NSString *)facesAdjustmentsFingerprint;
-(unsigned long long)originalChoice;
-(NSString *)adjustedMediaMetaDataType;
-(NSData *)adjustedMediaMetaData;
-(NSString *)collectionName;
-(NSString *)collectionIdentifier;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)resourceForType:(unsigned long long)arg1 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg1 ;
-(BOOL)supportsResourceType:(unsigned long long)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(id)allRelatedScopedIdentifiers;
-(BOOL)validateChangeWithError:(id*)arg1 ;
-(BOOL)_canLowerQuota;
-(unsigned long long)fullChangeTypeForFullRecord;
-(BOOL)isAssetChange;
-(BOOL)validateRecordForTracker:(id)arg1 ;
-(void)setMasterScopedIdentifier:(id)arg1 ;
-(void)setFacesData:(NSData *)arg1 ;
-(id)scopeIdentifiersForQuarantine;
-(NSString *)masterIdentifier;
-(NSString *)momentIdentifier;
-(void)setMomentIdentifier:(NSString *)arg1 ;
-(NSString *)momentName;
-(void)setMomentName:(NSString *)arg1 ;
-(unsigned long long)assetHDRType;
-(NSData *)facesData;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4 ;
@end

