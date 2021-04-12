/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {

	SCD_Union_TI16 _mask;
	int _stage;
	int _fingerID;
	double _radius;
	double _timestamp;
	long long _pathIndex;
	long long _forcedKeyCode;
	CGPoint _location;

}

@property (nonatomic,readonly) int stage;                            //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) CGPoint location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                        //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long pathIndex;                  //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) int fingerID;                         //@synthesize fingerID=_fingerID - In the implementation block
@property (nonatomic,readonly) long long forcedKeyCode;              //@synthesize forcedKeyCode=_forcedKeyCode - In the implementation block
@property (nonatomic,readonly) int continuousPathState; 
+(BOOL)supportsSecureCoding;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8 ;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 ;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6 ;
-(id)initWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8 ;
-(double)timestamp;
-(CGPoint)location;
-(int)stage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(long long)forcedKeyCode;
-(int)fingerID;
-(long long)pathIndex;
-(double)radius;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(int)continuousPathState;
@end

