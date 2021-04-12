/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
*/


@class NSURL, NSDate, NSNumber, NSString, NBComplicationLibraryItem;

@interface NBComplicationTimelineEntry : NSObject {

	BOOL _playable;
	BOOL _playStatePaused;
	BOOL _allowOverrideOfStoppedState;
	unsigned long long _state;
	NSURL* _launchURL;
	NSDate* _entryDate;
	NSNumber* _persistentID;
	NSString* _contentItemID;
	NSString* _chapterTitle;
	NSString* _bookTitle;
	NSString* _author;
	double _duration;
	double _elapsedTime;
	double _progress;
	double _remainingTime;
	NBComplicationLibraryItem* _recentAudiobook;

}

@property (nonatomic,retain) NSNumber * persistentID;                                    //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * contentItemID;                                     //@synthesize contentItemID=_contentItemID - In the implementation block
@property (nonatomic,copy) NSString * chapterTitle;                                      //@synthesize chapterTitle=_chapterTitle - In the implementation block
@property (nonatomic,copy) NSString * bookTitle;                                         //@synthesize bookTitle=_bookTitle - In the implementation block
@property (nonatomic,copy) NSString * author;                                            //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                         //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (getter=isPlayable,nonatomic,readonly) BOOL playable;                          //@synthesize playable=_playable - In the implementation block
@property (assign,getter=isPlayStatePaused,nonatomic) BOOL playStatePaused;              //@synthesize playStatePaused=_playStatePaused - In the implementation block
@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double remainingTime;                                       //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) NBComplicationLibraryItem * recentAudiobook;                //@synthesize recentAudiobook=_recentAudiobook - In the implementation block
@property (nonatomic,readonly) NSDate * projectedStartDate; 
@property (nonatomic,readonly) NSDate * projectedEndDate; 
@property (assign,nonatomic) BOOL allowOverrideOfStoppedState;                           //@synthesize allowOverrideOfStoppedState=_allowOverrideOfStoppedState - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSURL * launchURL;                                        //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                                         //@synthesize entryDate=_entryDate - In the implementation block
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)description;
-(double)progress;
-(unsigned long long)state;
-(double)duration;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSNumber *)persistentID;
-(void)setPersistentID:(NSNumber *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)elapsedTime;
-(NSURL *)launchURL;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(BOOL)isPlayable;
-(NSDate *)entryDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setContentItemID:(NSString *)arg1 ;
-(NSString *)contentItemID;
-(NSString *)chapterTitle;
-(void)setChapterTitle:(NSString *)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)entryForComplicationFamily:(long long)arg1 ;
-(id)_signatureCorner;
-(id)_extraLarge;
-(id)_signatureBezel;
-(NBComplicationLibraryItem *)recentAudiobook;
-(id)initForCompanion;
-(void)setRecentAudiobook:(NBComplicationLibraryItem *)arg1 ;
-(NSString *)bookTitle;
-(id)_largeModular;
-(id)_smallModular;
-(id)_smallUtility;
-(id)_largeUtility;
-(id)_circularMedium:(BOOL)arg1 ;
-(id)_signatureCircular;
-(id)_signatureRectangluar;
-(id)_progressProviderForRingComplications;
-(id)_nowPlayingProviderForFamily:(long long)arg1 ;
-(id)_stoppedModularTextProvider;
-(id)_italicTextProviderForText:(id)arg1 ;
-(id)_fullColorImageProviderWithImageName:(id)arg1 ;
-(id)_gaugeTextProvider;
-(id)_gaugeProgressProvider;
-(id)_makeSignatureCircularTemplate;
-(id)_signatureBookSummaryTextProvider;
-(BOOL)_wantsPausedStateWhenStopped;
-(id)_gaugeProgressProviderWithOverride:(BOOL)arg1 ;
-(BOOL)allowOverrideOfStoppedState;
-(BOOL)isPlayStatePaused;
-(id)initWithNoAudiobookWithRecentAudiobook:(id)arg1 ;
-(BOOL)isSameTrackAs:(id)arg1 ;
-(NSDate *)projectedStartDate;
-(NSDate *)projectedEndDate;
-(void)setBookTitle:(NSString *)arg1 ;
-(void)setPlayStatePaused:(BOOL)arg1 ;
-(void)setAllowOverrideOfStoppedState:(BOOL)arg1 ;
@end

