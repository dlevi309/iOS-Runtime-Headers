/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
*/

#import <SoundAutoConfig/SoundAutoConfig-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSArray;

@interface SACInfo : NSObject <NSSecureCoding> {

	NSNumber* _angle;
	NSString* _position;
	NSString* _role;
	NSNumber* _roomGain;
	NSArray* _lfeqIR;
	NSNumber* _spatialAudio;
	NSNumber* _calibrationMode;
	NSArray* _companionInfo;

}

@property (retain) NSNumber * angle;                        //@synthesize angle=_angle - In the implementation block
@property (retain) NSString * position;                     //@synthesize position=_position - In the implementation block
@property (retain) NSString * role;                         //@synthesize role=_role - In the implementation block
@property (retain) NSNumber * roomGain;                     //@synthesize roomGain=_roomGain - In the implementation block
@property (retain) NSArray * lfeqIR;                        //@synthesize lfeqIR=_lfeqIR - In the implementation block
@property (retain) NSNumber * spatialAudio;                 //@synthesize spatialAudio=_spatialAudio - In the implementation block
@property (retain) NSNumber * calibrationMode;              //@synthesize calibrationMode=_calibrationMode - In the implementation block
@property (retain) NSArray * companionInfo;                 //@synthesize companionInfo=_companionInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)calibrationModeDescription:(unsigned long long)arg1 ;
-(NSNumber *)angle;
-(NSString *)position;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(NSString *)arg1 ;
-(id)description;
-(void)setAngle:(NSNumber *)arg1 ;
-(NSArray *)lfeqIR;
-(void)setPosition:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)spatialAudio;
-(void)setSpatialAudio:(NSNumber *)arg1 ;
-(NSNumber *)roomGain;
-(void)setRoomGain:(NSNumber *)arg1 ;
-(void)setLfeqIR:(NSArray *)arg1 ;
-(NSNumber *)calibrationMode;
-(void)setCalibrationMode:(NSNumber *)arg1 ;
-(NSArray *)companionInfo;
-(void)setCompanionInfo:(NSArray *)arg1 ;
@end

