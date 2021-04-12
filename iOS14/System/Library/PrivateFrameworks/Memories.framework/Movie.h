/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/PHAssetRepresentationPersistenceObserver.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDate, CLLocation, MapLocation, NSDictionary, NSString, PHAsset, PHAssetRepresentation, Project;

@interface Movie : NSObject <PHAssetRepresentationPersistenceObserver, PHPhotoLibraryChangeObserver, NSCoding, NSCopying> {

	BOOL _titleIsLocalizable;
	BOOL _favorite;
	int _availability;
	NSURL* _identifierURL;
	NSDate* _creationDate;
	CLLocation* _location;
	MapLocation* _mapLocation;
	NSDictionary* _userInfo;
	NSString* _assetFingerprint;
	NSString* _masterAssetFingerprint;
	double _durationInSeconds;
	PHAsset* _phAsset;
	PHAssetRepresentation* _phAssetRepresentation;
	Project* _weakProject;

}

@property (nonatomic,retain) NSDate * creationDate;                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * identifierURL;                                      //@synthesize identifierURL=_identifierURL - In the implementation block
@property (assign,nonatomic) double durationInSeconds;                                   //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,retain) PHAsset * phAsset;                                          //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain) PHAssetRepresentation * phAssetRepresentation;              //@synthesize phAssetRepresentation=_phAssetRepresentation - In the implementation block
@property (assign,nonatomic) int availability;                                           //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic,__weak) Project * weakProject;                               //@synthesize weakProject=_weakProject - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,retain) MapLocation * mapLocation;                                  //@synthesize mapLocation=_mapLocation - In the implementation block
@property (assign,nonatomic) BOOL titleIsLocalizable;                                    //@synthesize titleIsLocalizable=_titleIsLocalizable - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                            //@synthesize favorite=_favorite - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * assetFingerprint;                                //@synthesize assetFingerprint=_assetFingerprint - In the implementation block
@property (nonatomic,retain) NSString * masterAssetFingerprint;                          //@synthesize masterAssetFingerprint=_masterAssetFingerprint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)mediaserverdCrashed;
+(void)replaceURL:(id)arg1 withURL:(id)arg2 ;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(CGSize)naturalSize;
-(MapLocation *)mapLocation;
-(void)setMapLocation:(MapLocation *)arg1 ;
-(BOOL)isOffline;
-(CLLocation *)location;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isTimelapse;
-(CGAffineTransform)transform;
-(BOOL)isMono;
-(void)setLocation:(CLLocation *)arg1 ;
-(float)frameRate;
-(BOOL)isDeleted;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSString *)description;
-(double)durationInSeconds;
-(PHAsset *)phAsset;
-(NSDate *)creationDate;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(int)availability;
-(void)setAvailability:(int)arg1 ;
-(void)updateAsset;
-(NSURL *)URL;
-(id)plistRepresentation;
-(void)updateMetadata;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)videoCodec;
-(BOOL)isOnline;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeFromList;
-(void)dealloc;
-(void)setDurationInSeconds:(double)arg1 ;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(CGSize)naturalSizeWithTransform;
-(void)mediaserverdCrashed;
-(BOOL)isHighFrameRate;
-(void)updateLocation;
-(NSURL *)identifierURL;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(CGSize)encodedPixelSize;
-(PHAssetRepresentation *)phAssetRepresentation;
-(void)updateAssetAvailability;
-(BOOL)titleIsLocalizable;
-(BOOL)isKenBurnsMovie;
-(void)replaceURL:(id)arg1 withURL:(id)arg2 ;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)initWithIdentifierURL:(id)arg1 ;
-(BOOL)isUnsupportedFormat;
-(id)initWithIdentifierURL:(id)arg1 userInfo:(id)arg2 ;
-(void)updateCreationDate;
-(CGSize)encodedPixelSizeWithTransform;
-(void)addToList;
-(void)setPhAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(NSString *)assetFingerprint;
-(NSString *)masterAssetFingerprint;
-(Project *)weakProject;
-(void)stealthlySetIdentifierURL:(id)arg1 ;
-(void)setWeakProject:(Project *)arg1 ;
-(void)setAssetFingerprint:(NSString *)arg1 ;
-(void)setMasterAssetFingerprint:(NSString *)arg1 ;
-(void)setTitleIsLocalizable:(BOOL)arg1 ;
-(id)resolveRelativePath:(id)arg1 ;
-(void)syncFavorite;
-(void)updateDuration;
-(void)updateFavorite;
-(void)persistenceStateOfAssetRepresentationDidChange:(id)arg1 ;
-(id)decodeIdentifierURLWithCoder:(id)arg1 ;
-(BOOL)attemptRepairWithFingerprint;
@end

