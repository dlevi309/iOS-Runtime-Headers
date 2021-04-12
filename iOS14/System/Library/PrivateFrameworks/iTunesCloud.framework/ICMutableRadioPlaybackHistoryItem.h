/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRadioPlaybackHistoryItem.h>

@class NSDate, NSNumber, NSDictionary;

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * pauseTime; 
@property (nonatomic,copy) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy) NSDate * skipDate; 
@property (assign,nonatomic) long long storeIdentifier; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setStoreIdentifier:(long long)arg1 ;
-(void)setPauseTime:(NSNumber *)arg1 ;
-(void)setServerTrackInfo:(NSDictionary *)arg1 ;
-(void)setSkipDate:(NSDate *)arg1 ;
@end

