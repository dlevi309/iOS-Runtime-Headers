/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, NSNumber, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,copy) NSNumber * perceivableStartTimeInSeconds; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)_af_mediaItemWithMRContentItemRef:(void*)arg1 ;
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)genre;
-(NSString *)album;
-(NSString *)artist;
-(SAMPReleaseInfo *)releaseInfo;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(id)encodedClassName;
-(SACalendar *)datePurchased;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSNumber *)perceivableStartTimeInSeconds;
-(void)setPerceivableStartTimeInSeconds:(NSNumber *)arg1 ;
-(NSString *)sortAlbum;
-(void)setSortAlbum:(NSString *)arg1 ;
@end

