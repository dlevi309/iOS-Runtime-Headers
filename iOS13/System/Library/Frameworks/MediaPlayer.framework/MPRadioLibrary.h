/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEnabled;
-(NSArray *)stations;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)stationCount;
-(id)stationWithIdentifier:(long long)arg1 ;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)_radioModel;
@end

