/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject {

	MPRadioController* _radioController;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) unsigned long long stationCount; 
@property (nonatomic,readonly) NSArray * stations; 
+(id)defaultRadioLibrary;
-(id)init;
-(id)_radioModel;
-(unsigned long long)stationCount;
-(id)stationWithIdentifier:(long long)arg1 ;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(NSArray *)stations;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
@end

