/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_NM3* _preferredIntervals;
	SCD_Struct_NM4* _supportedPlaybackRates;
	SCD_Struct_NM5* _supportedQueueEndActions;
	int _command;
	int _currentQueueEndAction;
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
	SCD_Struct_NM6 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                                     //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredIntervalsCount; 
@property (nonatomic,readonly) double* preferredIntervals; 
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedShortTitle; 
@property (nonatomic,retain) NSString * localizedShortTitle;                                  //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumRating; 
@property (assign,nonatomic) float minimumRating;                                             //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumRating; 
@property (assign,nonatomic) float maximumRating;                                             //@synthesize maximumRating=_maximumRating - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedPlaybackRatesCount; 
@property (nonatomic,readonly) float* supportedPlaybackRates; 
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                                  //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                                 //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationStyle; 
@property (assign,nonatomic) int presentationStyle;                                           //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredPlaybackRate; 
@property (assign,nonatomic) float preferredPlaybackRate;                                     //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentQueueEndAction; 
@property (assign,nonatomic) int currentQueueEndAction;                                       //@synthesize currentQueueEndAction=_currentQueueEndAction - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedQueueEndActionsCount; 
@property (nonatomic,readonly) int* supportedQueueEndActions; 
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)enabled;
-(NSString *)localizedTitle;
-(int)presentationStyle;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setShuffleMode:(int)arg1 ;
-(double*)preferredIntervals;
-(BOOL)hasEnabled;
-(void)setPresentationStyle:(int)arg1 ;
-(BOOL)hasLocalizedTitle;
-(void)setHasEnabled:(BOOL)arg1 ;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(void)setEnabled:(BOOL)arg1 ;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(BOOL)hasCommand;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)hasActive;
-(int)repeatMode;
-(void)setCurrentQueueEndAction:(int)arg1 ;
-(void)setHasActive:(BOOL)arg1 ;
-(id)description;
-(void)setRepeatMode:(int)arg1 ;
-(NSString *)localizedShortTitle;
-(void)setMinimumRating:(float)arg1 ;
-(int)currentQueueEndAction;
-(unsigned long long)hash;
-(float*)supportedPlaybackRates;
-(BOOL)readFrom:(id)arg1 ;
-(int*)supportedQueueEndActions;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)command;
-(float)minimumRating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(int)arg1 ;
-(float)maximumRating;
-(int)shuffleMode;
-(void)setMaximumRating:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(float)preferredPlaybackRate;
-(BOOL)hasPresentationStyle;
-(unsigned long long)preferredIntervalsCount;
-(void)clearPreferredIntervals;
-(double)preferredIntervalAtIndex:(unsigned long long)arg1 ;
-(void)addPreferredInterval:(double)arg1 ;
-(unsigned long long)supportedPlaybackRatesCount;
-(void)clearSupportedPlaybackRates;
-(float)supportedPlaybackRateAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedPlaybackRate:(float)arg1 ;
-(unsigned long long)supportedQueueEndActionsCount;
-(void)clearSupportedQueueEndActions;
-(int)supportedQueueEndActionAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedQueueEndAction:(int)arg1 ;
-(void)setPreferredIntervals:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasLocalizedShortTitle;
-(void)setHasMinimumRating:(BOOL)arg1 ;
-(BOOL)hasMinimumRating;
-(void)setHasMaximumRating:(BOOL)arg1 ;
-(BOOL)hasMaximumRating;
-(void)setSupportedPlaybackRates:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasPresentationStyle:(BOOL)arg1 ;
-(void)setHasPreferredPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPreferredPlaybackRate;
-(void)setHasCurrentQueueEndAction:(BOOL)arg1 ;
-(BOOL)hasCurrentQueueEndAction;
-(id)currentQueueEndActionAsString:(int)arg1 ;
-(int)StringAsCurrentQueueEndAction:(id)arg1 ;
-(void)setSupportedQueueEndActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedQueueEndActionsAsString:(int)arg1 ;
-(int)StringAsSupportedQueueEndActions:(id)arg1 ;
@end

