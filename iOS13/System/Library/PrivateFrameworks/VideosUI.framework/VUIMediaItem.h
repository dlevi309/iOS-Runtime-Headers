/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaEntity.h>

@class NSNumber, MPMediaItem, NSString, NSURL, VUIMediaItemCredits, NSDate;

@interface VUIMediaItem : VUIMediaEntity {

	NSNumber* _isPlayable;

}

@property (nonatomic,readonly) MPMediaItem * mediaPlayerMediaItem; 
@property (nonatomic,copy,readonly) NSNumber * assetType; 
@property (nonatomic,copy,readonly) NSNumber * isPlayable;                                             //@synthesize isPlayable=_isPlayable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSString * previewFrameImageIdentifier; 
@property (nonatomic,copy,readonly) NSURL * extrasURL; 
@property (nonatomic,copy,readonly) NSString * seasonTitle; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSNumber * episodeIndexInSeries; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) VUIMediaItemCredits * credits; 
@property (nonatomic,copy,readonly) NSNumber * rentalPlaybackDuration; 
@property (nonatomic,copy,readonly) NSDate * rentalExpirationDate; 
@property (nonatomic,copy,readonly) NSDate * downloadExpirationDate; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * bookmark; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_mediaItemWithMPMediaItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(id)description;
-(NSNumber *)duration;
-(id)creationDate;
-(NSNumber *)bookmark;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSNumber *)assetType;
-(NSNumber *)isPlayable;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(id)lastPlayedDate;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSNumber *)episodeNumber;
-(VUIMediaItemCredits *)credits;
-(id)modifiedDate;
-(NSURL *)extrasURL;
-(NSString *)studio;
-(NSDate *)rentalExpirationDate;
-(NSNumber *)rentalPlaybackDuration;
-(MPMediaItem *)mediaPlayerMediaItem;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(NSNumber *)episodeIndexInSeries;
-(NSString *)seasonTitle;
-(NSDate *)downloadExpirationDate;
-(NSString *)previewFrameImageIdentifier;
@end

