/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSDate, ICStorePlatformMetadata, NSArray, ICStoreHLSAssetInfo;

@interface ICRadioStationTrack : NSObject {

	NSDictionary* _responseDictionary;
	long long _responseVersion;
	NSDate* _expirationDate;
	ICRadioStationTrack* _parentTrack;

}

@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) ICStorePlatformMetadata * storePlatformMetadata; 
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
@property (nonatomic,copy,readonly) NSArray * radioStreamAssets; 
@property (nonatomic,readonly) long long likeState; 
@property (getter=isSkippable,nonatomic,readonly) BOOL skippable; 
@property (nonatomic,readonly) long long trackType; 
@property (nonatomic,readonly) BOOL hasStartTime; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) ICRadioStationTrack * beforePromoContentTrack; 
@property (nonatomic,readonly) ICRadioStationTrack * afterPromoContentTrack; 
@property (nonatomic,readonly) ICRadioStationTrack * parentTrack;                                 //@synthesize parentTrack=_parentTrack - In the implementation block
+(id)flattenedTracksWithTracks:(id)arg1 ;
-(BOOL)hasStartTime;
-(long long)trackType;
-(long long)storeAdamID;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(NSDate *)expirationDate;
-(BOOL)isSkippable;
-(long long)likeState;
-(ICRadioStationTrack *)beforePromoContentTrack;
-(ICRadioStationTrack *)afterPromoContentTrack;
-(id)initWithResponseDictionary:(id)arg1 responseVersion:(long long)arg2 expirationDate:(id)arg3 ;
-(id)_hlsAssetFromAssetDictionary:(id)arg1 ;
-(NSArray *)radioStreamAssets;
-(NSDictionary *)serverTrackInfo;
-(ICStorePlatformMetadata *)storePlatformMetadata;
-(ICRadioStationTrack *)parentTrack;
-(NSArray *)fileAssets;
-(double)startTime;
@end

