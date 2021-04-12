/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _timerToken;
	BOOL _finalized;
	BOOL _paused;
	UIColor* _tintColor;
	double _backgroundRingAlpha;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign) double backgroundRingAlpha;                 //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_update;
-(void)_validate;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_commonInit;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)validate;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)JSONObjectRepresentation;
-(double)progressFractionForNow:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(void)_maybeStartOrStopUpdates;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(double)backgroundRingAlpha;
@end

