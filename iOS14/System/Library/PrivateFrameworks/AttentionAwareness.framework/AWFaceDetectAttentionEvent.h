/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)validateMask;
-(double)roll;
-(double)pitch;
-(double)yaw;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isMetadataValid;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 faceMetadata:(AWFaceDetectMetadata*)arg3 ;
-(id)description;
-(unsigned long long)orientation;
-(id)initWithCoder:(id)arg1 ;
@end

