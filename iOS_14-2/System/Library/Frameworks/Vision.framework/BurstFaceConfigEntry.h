/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface BurstFaceConfigEntry : NSObject {

	int faceId;
	CGRect faceRect;
	int framesSinceLast;

}

@property (assign) int faceId; 
@property (assign) CGRect faceRect; 
@property (assign) int framesSinceLast; 
-(CGRect)faceRect;
-(int)faceId;
-(void)setFaceId:(int)arg1 ;
-(id)initWithRect:(CGRect)arg1 withFaceId:(int)arg2 ;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
@end

