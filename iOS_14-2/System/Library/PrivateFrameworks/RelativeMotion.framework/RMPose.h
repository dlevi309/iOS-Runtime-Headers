/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <RelativeMotion/RMLogItem.h>

@class RMAttitude;

@interface RMPose : RMLogItem {

	RMAttitude* _attitude;
	double _consumedAuxTimestamp;
	double _receivedAuxTimestamp;
	double _machAbsTimestamp;

}

@property (assign,nonatomic) double machAbsTimestamp;                    //@synthesize machAbsTimestamp=_machAbsTimestamp - In the implementation block
@property (nonatomic,readonly) RMAttitude * attitude;                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) double consumedAuxTimestamp;              //@synthesize consumedAuxTimestamp=_consumedAuxTimestamp - In the implementation block
@property (nonatomic,readonly) double receivedAuxTimestamp;              //@synthesize receivedAuxTimestamp=_receivedAuxTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)machAbsTimestamp;
-(double)consumedAuxTimestamp;
-(double)receivedAuxTimestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(RMAttitude *)attitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAttitude:(id)arg1 consumedAuxTimestamp:(double)arg2 receivedAuxTimestamp:(double)arg3 machAbsTimestamp:(double)arg4 ;
-(void)setMachAbsTimestamp:(double)arg1 ;
@end

