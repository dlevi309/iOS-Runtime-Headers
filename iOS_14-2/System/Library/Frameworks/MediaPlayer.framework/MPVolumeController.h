/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)volumeCapabilities;
-(NSString *)volumeControlLabel;
-(NSString *)volumeAudioCategory;
-(void)adjustVolumeValue:(float)arg1 ;
-(id)init;
-(long long)volumeWarningState;
-(id<MPVolumeControllerDelegate>)delegate;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2 ;
-(void)_updateVolumeControlAvailability;
-(id)initWithDataSource:(id)arg1 ;
-(float)EUVolumeLimit;
-(void)updateVolumeValue;
-(BOOL)isVolumeControlAvailable;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2 ;
-(id<MPVolumeControllerDataSource>)dataSource;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2 ;
-(void)setDelegate:(id<MPVolumeControllerDelegate>)arg1 ;
-(void)setDataSource:(id<MPVolumeControllerDataSource>)arg1 ;
-(void)beginDecreasingRelativeVolume;
-(void)setVolumeValue:(float)arg1 ;
-(void)endIncreasingRelativeVolume;
-(void)setMuted:(BOOL)arg1 ;
-(void)endDecreasingRelativeVolume;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2 ;
-(float)volumeValue;
-(void)beginIncreasingRelativeVolume;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2 ;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2 ;
-(BOOL)isMuted;
-(void)setVolume:(float)arg1 withNoticationDelay:(float)arg2 ;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2 ;
-(void)updateVolumeWarningState;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2 ;
-(BOOL)volumeWarningEnabled;
-(BOOL)muted;
@end

