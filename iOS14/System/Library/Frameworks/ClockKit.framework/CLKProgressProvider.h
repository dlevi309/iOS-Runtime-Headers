/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, CLKClockTimerToken, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	CLKClockTimerToken* _timerToken;
	BOOL _finalized;
	BOOL _paused;
	UIColor* _tintColor;
	double _backgroundRingAlpha;

}

@property (nonatomic,retain) UIColor * tintColor;                   //@synthesize tintColor=_tintColor - In the implementation block
@property (assign) double backgroundRingAlpha;                      //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign,nonatomic) BOOL paused;                           //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) BOOL needsTimerUpdates; 
+(BOOL)supportsSecureCoding;
-(BOOL)validate;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)finalize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_validate;
-(unsigned long long)hash;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(void)_commonInit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(id)JSONObjectRepresentation;
-(void)_maybeStartOrStopUpdates;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
@end

