/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSUUID;

@interface VNTrajectoryObservation : VNObservation {

	NSArray* _detectedPoints;
	NSArray* _projectedPoints;
	NSUUID* _requestUUID;
	 _equationCoefficients;

}

@property (nonatomic,copy) NSArray * detectedPoints;               //@synthesize detectedPoints=_detectedPoints - In the implementation block
@property (nonatomic,copy) NSArray * projectedPoints;              //@synthesize projectedPoints=_projectedPoints - In the implementation block
@property (assign,nonatomic)  equationCoefficients;                //@synthesize equationCoefficients=_equationCoefficients - In the implementation block
@property (nonatomic,copy) NSUUID * requestUUID;                   //@synthesize requestUUID=_requestUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestUUID:(NSUUID *)arg1 ;
-()equationCoefficients;
-(void)setEquationCoefficients:;
-(NSUUID *)requestUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 requestUUID:(id)arg2 trajectoryUUID:(id)arg3 detectedPoints:(id)arg4 projectedPoints:(id)arg5 equationCoefficients:(float)arg6 ;
-(NSArray *)detectedPoints;
-(void)setDetectedPoints:(NSArray *)arg1 ;
-(NSArray *)projectedPoints;
-(void)setProjectedPoints:(NSArray *)arg1 ;
@end

