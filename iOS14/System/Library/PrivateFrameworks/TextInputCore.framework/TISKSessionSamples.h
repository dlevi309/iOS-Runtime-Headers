/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDate, NSString, TIKeyboardLayout;

@interface TISKSessionSamples : NSObject <NSSecureCoding> {

	double _currentTypingStart;
	BOOL _isEmpty;
	NSMutableDictionary* _keyedSamples;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _identifier;
	NSString* _version;
	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) NSMutableDictionary * keyedSamples;              //@synthesize keyedSamples=_keyedSamples - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL isEmpty;                                    //@synthesize isEmpty=_isEmpty - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setup;
-(void)merge:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEmpty;
-(NSDate *)endTime;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(NSString *)version;
-(NSDate *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)counter:(id)arg1 ;
-(id)samples:(id)arg1 ;
-(TIKeyboardLayout *)layout;
-(void)setIsEmpty:(BOOL)arg1 ;
-(id)init:(id)arg1 endDate:(id)arg2 ;
-(id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 layout:(id)arg5 ;
-(void)startTypingTimerAt:(double)arg1 ;
-(void)haltTypingTimerAt:(double)arg1 ;
-(void)haltTypingTimer;
-(BOOL)isTypingTimerHalted;
-(void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(unsigned long long)arg3 ;
-(void)addSample:(id)arg1 forKey:(id)arg2 ;
-(id)samples:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(id)singleMetric:(id)arg1 ;
-(id)positionalMetric:(id)arg1 ;
-(id)_roundUpToNearestHalfHour:(id)arg1 ;
-(id)_roundedSessionInterval;
-(id)generateDataForSR;
-(NSMutableDictionary *)keyedSamples;
-(void)setKeyedSamples:(NSMutableDictionary *)arg1 ;
@end

