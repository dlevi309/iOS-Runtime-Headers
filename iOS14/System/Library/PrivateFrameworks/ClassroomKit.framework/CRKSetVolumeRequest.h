/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKSetVolumeRequest : CATTaskRequest {

	double _volume;

}

@property (assign,nonatomic) double volume;              //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVolume:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)volume;
@end

