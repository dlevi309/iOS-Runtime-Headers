/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
-(BOOL)validate;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)finalized;
-(void)setFinalized:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(id)_init;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(NSArray *)gaugeColorLocations;
-(NSArray *)gaugeColors;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(void)setGaugeColors:(NSArray *)arg1 ;
-(void)setGaugeColorLocations:(NSArray *)arg1 ;
@end

