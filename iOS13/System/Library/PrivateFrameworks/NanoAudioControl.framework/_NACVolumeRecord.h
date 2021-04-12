/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface _NACVolumeRecord : NSObject <NSSecureCoding> {

	NSMutableSet* _observers;
	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _volumeValue;
	float _EUVolumeLimit;
	long long _volumeWarningState;

}

@property (assign,nonatomic) float volumeValue;                                                        //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,nonatomic) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (nonatomic,readonly) NSMutableSet * observers; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableSet *)observers;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)isVolumeControlAvailable;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1 ;
-(void)setEUVolumeLimit:(float)arg1 ;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(void)setVolumeWarningState:(long long)arg1 ;
-(BOOL)isVolumeWarningEnabled;
@end

