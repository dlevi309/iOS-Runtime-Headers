/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVComputeGrabCut : NSObject {

	HFGrabCutInterface* _module;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)processImage:(id)arg1 trimap:(id)arg2 roi:(CGRect)arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7 ;
@end

