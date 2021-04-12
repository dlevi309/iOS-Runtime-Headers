/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerLooperInternal, NSError, NSArray;

@interface AVPlayerLooper : NSObject {

	AVPlayerLooperInternal* _looper;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (readonly) long long loopCount; 
@property (nonatomic,readonly) NSArray * loopingPlayerItems; 
+(void)initialize;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 ;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(long long)loopCount;
-(id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(BOOL)_setupLoopingReturningError:(id*)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_turnOffLooping;
-(int)_calculateNumberOfCopiesNeeded;
-(void)_configureLoopingItem:(id)arg1 ;
-(BOOL)_isWaitingForLastCopyToFinishSet;
-(void)_cleanupAfterPlayingLastLoopingCopy;
-(void)disableLooping;
-(NSArray *)loopingPlayerItems;
@end

