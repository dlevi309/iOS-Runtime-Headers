/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPMutableRadioIdentifiers <MPRadioIdentifiers>
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@required
-(void)setStationStringID:(id)arg1;
-(void)setStationHash:(id)arg1;
-(void)setStationID:(long long)arg1;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(long long)stationID;

@end

