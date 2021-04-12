/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(CGPoint)location;
-(double)radius;
-(id)shortDescription;
-(int)stage;
-(int)fingerID;
-(int)continuousPathState;
-(long long)pathIndex;
-(id)initWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8 ;
-(long long)forcedKeyCode;
@end

