/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVFrameSet;

@interface WriterReorderQ : NSObject {

	PVFrameSet* _frameSet;
	SCD_Struct_JF3 _lastReorderedTime;

}

@property (nonatomic,retain) PVFrameSet * frameSet;                         //@synthesize frameSet=_frameSet - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 lastReorderedTime;              //@synthesize lastReorderedTime=_lastReorderedTime - In the implementation block
-(id)init;
-(PVFrameSet *)frameSet;
-(void)setFrameSet:(PVFrameSet *)arg1 ;
-(SCD_Struct_JF3)lastReorderedTime;
-(void)setLastReorderedTime:(SCD_Struct_JF3)arg1 ;
-(id)getReorderedFrameSet:(id)arg1 ;
-(id)clearQueuedFrameSet;
@end

