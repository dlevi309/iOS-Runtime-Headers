/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface CLKGaugeProvider : NSObject <NSSecureCoding, NSCopying> {

	BOOL _paused;
	BOOL _finalized;
	long long _style;
	NSArray* _gaugeColors;
	NSArray* _gaugeColorLocations;
	NSString* _accessibilityLabel;

}

@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSArray * gaugeColors;                      //@synthesize gaugeColors=_gaugeColors - In the implementation block
@property (nonatomic,retain) NSArray * gaugeColorLocations;              //@synthesize gaugeColorLocations=_gaugeColorLocations - In the implementation block
@property (assign,nonatomic) BOOL paused;                                //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL finalized;                             //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)validate;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)finalized;
-(void)setFinalized:(BOOL)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(NSArray *)gaugeColors;
-(NSArray *)gaugeColorLocations;
-(BOOL)needsTimerUpdates;
-(double)progressFractionForNow:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(void)setGaugeColors:(NSArray *)arg1 ;
-(void)setGaugeColorLocations:(NSArray *)arg1 ;
@end

