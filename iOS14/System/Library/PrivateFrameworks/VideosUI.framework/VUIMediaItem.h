/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaEntity.h>

@class NSNumber, NSString, MPMediaItem, NSURL, VUIMediaItemCredits, NSDate;

@interface VUIMediaItem : VUIMediaEntity {

	NSNumber* _isPlayable;
	NSString* _seasonCanonicalID;
	NSString* _showCanonicalID;

}

@property (nonatomic,readonly) MPMediaItem * mediaPlayerMediaItem; 
@property (nonatomic,copy,readonly) NSNumber * assetType; 
@property (nonatomic,copy,readonly) NSNumber * isPlayable;                                             //@synthesize isPlayable=_isPlayable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSString * previewFrameImageIdentifier; 
@property (nonatomic,copy,readonly) NSURL * extrasURL; 
@property (nonatomic,copy,readonly) NSString * seasonTitle; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier; 
@property (nonatomic,copy,readonly) NSString * seasonCanonicalID;                                      //@synthesize seasonCanonicalID=_seasonCanonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * showCanonicalID;                                        //@synthesize showCanonicalID=_showCanonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSNumber * episodeIndexInSeries; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) VUIMediaItemCredits * credits; 
@property (nonatomic,copy,readonly) NSNumber * rentalPlaybackDuration; 
@property (nonatomic,copy,readonly) NSDate * rentalExpirationDate; 
@property (nonatomic,copy,readonly) NSDate * downloadExpirationDate; 
@property (nonatomic,copy,readonly) NSDate * availabilityEndDate; 
@property (nonatomic,readonly) BOOL allowsManualDownloadRenewal; 
@property (nonatomic,readonly) BOOL renewsOfflineKeysAutomatically; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * bookmark; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_mediaItemWithMPMediaItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(NSNumber *)episodeNumber;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSNumber *)isPlayable;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)bookmark;
-(NSNumber *)assetType;
-(VUIMediaItemCredits *)credits;
-(NSString *)studio;
-(id)lastPlayedDate;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(id)description;
-(id)creationDate;
-(NSNumber *)duration;
-(id)modifiedDate;
-(NSDate *)rentalExpirationDate;
-(NSNumber *)rentalPlaybackDuration;
-(MPMediaItem *)mediaPlayerMediaItem;
-(NSURL *)extrasURL;
-(NSDate *)downloadExpirationDate;
-(NSDate *)availabilityEndDate;
-(BOOL)renewsOfflineKeysAutomatically;
-(BOOL)allowsManualDownloadRenewal;
-(NSString *)seasonCanonicalID;
-(NSString *)showCanonicalID;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(NSNumber *)episodeIndexInSeries;
-(NSString *)seasonTitle;
-(NSString *)previewFrameImageIdentifier;
@end

