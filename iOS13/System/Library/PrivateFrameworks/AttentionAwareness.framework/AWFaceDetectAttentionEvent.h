/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding> {

	BOOL _metadataValid;
	double _pitch;
	double _yaw;
	double _roll;
	unsigned long long _orientation;

}

@property (getter=isMetadataValid,nonatomic,readonly) BOOL metadataValid;              //@synthesize metadataValid=_metadataValid - In the implementation block
@property (nonatomic,readonly) double pitch;                                           //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) double yaw;                                             //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) double roll;                                            //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)orientation;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 faceMetadata:(AWFaceDetectMetadata*)arg3 ;
-(BOOL)isMetadataValid;
@end

