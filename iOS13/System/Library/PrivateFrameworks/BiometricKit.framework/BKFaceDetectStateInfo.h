/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


#import <BiometricKit/BiometricKit-Structs.h>
@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject {

	BOOL _faceDetected;
	BOOL _tooCloseToCamera;
	BOOL _tooFarFromCamera;
	BOOL _multipleFaces;
	BOOL _flare;
	BOOL _occlusion;
	BOOL _partiallyOutOfView;
	NSNumber* _pitch;
	NSNumber* _yaw;
	NSNumber* _roll;
	unsigned long long _orientation;

}

@property (assign,nonatomic) BOOL faceDetected;                           //@synthesize faceDetected=_faceDetected - In the implementation block
@property (assign,nonatomic) BOOL tooCloseToCamera;                       //@synthesize tooCloseToCamera=_tooCloseToCamera - In the implementation block
@property (assign,nonatomic) BOOL tooFarFromCamera;                       //@synthesize tooFarFromCamera=_tooFarFromCamera - In the implementation block
@property (assign,nonatomic) BOOL multipleFaces;                          //@synthesize multipleFaces=_multipleFaces - In the implementation block
@property (assign,nonatomic) BOOL flare;                                  //@synthesize flare=_flare - In the implementation block
@property (assign,nonatomic) BOOL occlusion;                              //@synthesize occlusion=_occlusion - In the implementation block
@property (nonatomic,retain) NSNumber * pitch;                            //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,retain) NSNumber * yaw;                              //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,retain) NSNumber * roll;                             //@synthesize roll=_roll - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL partiallyOutOfView;                   //@synthesize partiallyOutOfView=_partiallyOutOfView - In the implementation block
-(id)dictionary;
-(unsigned long long)orientation;
-(void)setOrientation:(unsigned long long)arg1 ;
-(NSNumber *)pitch;
-(NSNumber *)yaw;
-(NSNumber *)roll;
-(void)setPitch:(NSNumber *)arg1 ;
-(void)setYaw:(NSNumber *)arg1 ;
-(void)setRoll:(NSNumber *)arg1 ;
-(BOOL)occlusion;
-(void)setOcclusion:(BOOL)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPresenceState:(BOOL)arg1 ;
-(id)initWithPresenceState:(BOOL)arg1 details:(id)arg2 ;
-(id)initFromFaceInfo:(const SCD_Struct_BK10*)arg1 ;
-(BOOL)faceDetected;
-(void)setFaceDetected:(BOOL)arg1 ;
-(BOOL)tooCloseToCamera;
-(void)setTooCloseToCamera:(BOOL)arg1 ;
-(BOOL)tooFarFromCamera;
-(void)setTooFarFromCamera:(BOOL)arg1 ;
-(BOOL)multipleFaces;
-(void)setMultipleFaces:(BOOL)arg1 ;
-(BOOL)flare;
-(void)setFlare:(BOOL)arg1 ;
-(BOOL)partiallyOutOfView;
@end

