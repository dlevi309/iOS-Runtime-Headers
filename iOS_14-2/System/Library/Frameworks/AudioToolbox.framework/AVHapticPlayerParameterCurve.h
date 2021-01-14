/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding> {

	unsigned long long _type;
	double _time;
	unsigned long long _shape;
	NSArray* _controlPoints;

}

@property (assign) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (assign) double time;                            //@synthesize time=_time - In the implementation block
@property (assign) unsigned long long shape;               //@synthesize shape=_shape - In the implementation block
@property (readonly) NSArray * controlPoints; 
+(BOOL)supportsSecureCoding;
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)controlPoints;
@end

