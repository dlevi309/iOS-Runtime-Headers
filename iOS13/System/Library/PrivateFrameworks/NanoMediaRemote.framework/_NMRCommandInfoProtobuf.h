/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_NM3* _preferredIntervals;
	SCD_Struct_NM4* _supportedPlaybackRates;
	int _command;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	float _preferredPlaybackRate;
	int _presentationStyle;
	int _repeatMode;
	int _shuffleMode;
	BOOL _active;
	BOOL _enabled;
	SCD_Struct_NM5 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                                   //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                                   //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredIntervalsCount; 
@property (nonatomic,readonly) double* preferredIntervals; 
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedShortTitle; 
@property (nonatomic,retain) NSString * localizedShortTitle;                                //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumRating; 
@property (assign,nonatomic) float minimumRating;                                           //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumRating; 
@property (assign,nonatomic) float maximumRating;                                           //@synthesize maximumRating=_maximumRating - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedPlaybackRatesCount; 
@property (nonatomic,readonly) float* supportedPlaybackRates; 
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                                //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                               //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationStyle; 
@property (assign,nonatomic) int presentationStyle;                                         //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredPlaybackRate; 
@property (assign,nonatomic) float preferredPlaybackRate;                                   //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setActive:(BOOL)arg1 ;
-(float)maximumRating;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)active;
-(void)setPresentationStyle:(int)arg1 ;
-(int)presentationStyle;
-(void)setCommand:(int)arg1 ;
-(void)setHasActive:(BOOL)arg1 ;
-(BOOL)hasActive;
-(int)command;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)hasLocalizedTitle;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(NSString *)localizedShortTitle;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(double*)preferredIntervals;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(float)minimumRating;
-(float*)supportedPlaybackRates;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(unsigned long long)preferredIntervalsCount;
-(void)clearPreferredIntervals;
-(double)preferredIntervalAtIndex:(unsigned long long)arg1 ;
-(void)addPreferredInterval:(double)arg1 ;
-(void)setPreferredIntervals:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasLocalizedShortTitle;
-(void)setHasMinimumRating:(BOOL)arg1 ;
-(BOOL)hasMinimumRating;
-(void)setHasMaximumRating:(BOOL)arg1 ;
-(BOOL)hasMaximumRating;
-(void)setHasPresentationStyle:(BOOL)arg1 ;
-(BOOL)hasPresentationStyle;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(void)setHasPreferredPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPreferredPlaybackRate;
-(float)preferredPlaybackRate;
-(unsigned long long)supportedPlaybackRatesCount;
-(void)clearSupportedPlaybackRates;
-(float)supportedPlaybackRateAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedPlaybackRate:(float)arg1 ;
-(void)setSupportedPlaybackRates:(float*)arg1 count:(unsigned long long)arg2 ;
@end

