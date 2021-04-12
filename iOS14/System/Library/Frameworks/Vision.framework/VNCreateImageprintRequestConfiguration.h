/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration {

	NSNumber* _timeStamp;

}

@property (nonatomic,copy) NSNumber * timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

