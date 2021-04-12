/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPMutableRadioIdentifiers <MPRadioIdentifiers>
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@required
-(long long)stationID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setStationStringID:(id)arg1;
-(void)setStationHash:(id)arg1;
-(void)setStationID:(long long)arg1;

@end

