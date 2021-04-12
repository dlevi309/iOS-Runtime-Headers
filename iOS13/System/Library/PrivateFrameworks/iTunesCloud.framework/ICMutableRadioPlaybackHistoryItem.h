/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

