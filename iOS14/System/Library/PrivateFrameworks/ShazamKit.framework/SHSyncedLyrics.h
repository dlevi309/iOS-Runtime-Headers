/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SHSyncedLyricsDelegate;
@class NSArray, NSString, NSTimer, NSDate;

@interface SHSyncedLyrics : NSObject <NSSecureCoding> {

	id<SHSyncedLyricsDelegate> _delegate;
	NSArray* _lines;
	NSString* _attribution;
	double _preCueDuration;
	NSTimer* _timer;
	NSDate* _lyricsStartDate;
	double _timeWarp;

}

@property (nonatomic,retain) NSArray * lines;                                         //@synthesize lines=_lines - In the implementation block
@property (nonatomic,copy) NSString * attribution;                                    //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSDate * lyricsStartDate;                              //@synthesize lyricsStartDate=_lyricsStartDate - In the implementation block
@property (assign,nonatomic) double timeWarp;                                         //@synthesize timeWarp=_timeWarp - In the implementation block
@property (assign,nonatomic,__weak) id<SHSyncedLyricsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double preCueDuration;                                   //@synthesize preCueDuration=_preCueDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimer *)timer;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(id<SHSyncedLyricsDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SHSyncedLyricsDelegate>)arg1 ;
-(NSString *)attribution;
-(id)initWithCoder:(id)arg1 ;
-(double)timeWarp;
-(void)setAttribution:(NSString *)arg1 ;
-(id)snippetFromOffset:(double)arg1 ;
-(id)initWithLyricsStartDate:(id)arg1 lines:(id)arg2 attribution:(id)arg3 ;
-(void)startSyncing;
-(void)stopSyncing;
-(double)offsetFromStartDate;
-(id)currentLyricLineForOffset:(double)arg1 ;
-(double)timeToLine:(id)arg1 afterDuration:(double)arg2 ;
-(NSDate *)lyricsStartDate;
-(double)fireTimeForLine:(id)arg1 ;
-(double)preCueDuration;
-(void)setPreCueDuration:(double)arg1 ;
-(void)setTimeWarp:(double)arg1 ;
@end

