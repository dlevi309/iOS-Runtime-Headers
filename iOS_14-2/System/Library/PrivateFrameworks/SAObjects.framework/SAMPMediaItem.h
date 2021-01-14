/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(SAMPReleaseInfo *)releaseInfo;
-(NSString *)genre;
-(id)groupIdentifier;
-(NSString *)artist;
-(id)encodedClassName;
-(void)setGenre:(NSString *)arg1 ;
-(SACalendar *)datePurchased;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(NSString *)sortArtist;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSString *)sortAlbum;
-(NSNumber *)perceivableStartTimeInSeconds;
-(void)setPerceivableStartTimeInSeconds:(NSNumber *)arg1 ;
-(void)setSortAlbum:(NSString *)arg1 ;
@end

