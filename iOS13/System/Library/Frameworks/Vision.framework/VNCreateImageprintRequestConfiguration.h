/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration {

	NSNumber* _timeStamp;

}

@property (nonatomic,copy) NSNumber * timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
@end

