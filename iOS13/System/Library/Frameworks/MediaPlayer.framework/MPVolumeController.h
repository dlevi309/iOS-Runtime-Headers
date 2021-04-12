/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPVolumeControllerDataSourceDelegate.h>

@protocol MPVolumeControllerDataSource, MPVolumeControllerDelegate;
@class NSString;

@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate> {

	id<MPVolumeControllerDataSource> _dataSource;
	int _volumeChangeCoalescingCount;
	unsigned _volumeCapabilities;
	id<MPVolumeControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPVolumeControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) unsigned volumeCapabilities;                                              //@synthesize volumeCapabilities=_volumeCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (nonatomic,copy) NSString * volumeAudioCategory; 
@property (assign,nonatomic) float volumeValue; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,retain) id<MPVolumeControllerDataSource> dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForWarningState:(long long)arg1 ;
-(id)init;
-(id<MPVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id<MPVolumeControllerDelegate>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<MPVolumeControllerDataSource>)dataSource;
-(void)setDataSource:(id<MPVolumeControllerDataSource>)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(NSString *)volumeAudioCategory;
-(NSString *)volumeControlLabel;
-(void)beginIncreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)beginDecreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;
-(void)adjustVolumeValue:(float)arg1 ;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2 ;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1 ;
-(void)updateVolumeValue;
-(void)setVolume:(float)arg1 withNoticationDelay:(float)arg2 ;
-(void)updateVolumeWarningState;
-(void)_updateVolumeControlAvailability;
-(unsigned)volumeCapabilities;
@end

