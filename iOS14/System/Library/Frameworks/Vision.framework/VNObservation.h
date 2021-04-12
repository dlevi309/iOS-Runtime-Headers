/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSUUID;

@interface VNObservation : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	float _confidence;
	NSUUID* _uuid;
	SCD_Struct_VN51 _timeRange;

}

@property (setter=setUUID:,nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) float confidence;                                  //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) SCD_Struct_VN51 timeRange;                         //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(float)confidence;
-(NSUUID *)uuid;
-(id)init;
-(void)setTimeRange:(SCD_Struct_VN51)arg1 ;
-(SCD_Struct_VN51)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setConfidence:(float)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(void)setUUID:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

