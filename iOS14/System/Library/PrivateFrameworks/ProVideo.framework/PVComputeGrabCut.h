/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVComputeGrabCut : NSObject {

	HFGrabCutInterface* _module;

}
-(id)init;
-(void)reset;
-(void)dealloc;
-(BOOL)processImage:(id)arg1 trimap:(id)arg2 roi:(CGRect)arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7 ;
@end

