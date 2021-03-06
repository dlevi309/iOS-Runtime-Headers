/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSDate, ICRadioStationMetadata, NSArray;

@interface ICRadioGetTracksResponse : ICRadioResponse {

	NSDate* _assetExpirationDate;

}

@property (nonatomic,readonly) ICRadioStationMetadata * stationMetadata; 
@property (nonatomic,readonly) long long tracklistActionType; 
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) NSDate * assetExpirationDate;                     //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
-(NSArray *)tracks;
-(NSDate *)assetExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(ICRadioStationMetadata *)stationMetadata;
-(long long)tracklistActionType;
@end

