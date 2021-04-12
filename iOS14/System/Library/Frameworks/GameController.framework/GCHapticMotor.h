/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding> {

	int _index;
	float _frequency;
	float _amplitude;
	NSString* _name;
	unsigned long long _features;
	NSMutableArray* _queuedTransients;

}

@property (nonatomic,retain) NSMutableArray * queuedTransients;              //@synthesize queuedTransients=_queuedTransients - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long features;                  //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) float frequency;                                //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) float amplitude;                                //@synthesize amplitude=_amplitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFrequency:(float)arg1 ;
-(int)index;
-(float)frequency;
-(id)init;
-(unsigned long long)features;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAmplitude:(float)arg1 ;
-(NSString *)name;
-(id)initWithIndex:(int)arg1 ;
-(id)description;
-(float)amplitude;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 ;
-(void)applyValuesFrom:(id)arg1 ;
-(void)enqueueHapticTransientEvent:(id)arg1 ;
-(void)drainQueuedTransients;
-(NSMutableArray *)queuedTransients;
-(void)setQueuedTransients:(NSMutableArray *)arg1 ;
@end

