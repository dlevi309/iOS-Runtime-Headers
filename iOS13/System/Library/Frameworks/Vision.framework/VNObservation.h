/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (setter=setUUID:,nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) float confidence;                                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUUID:(id)arg1 ;
-(float)confidence;
-(unsigned long long)requestRevision;
-(void)setConfidence:(float)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
@end

