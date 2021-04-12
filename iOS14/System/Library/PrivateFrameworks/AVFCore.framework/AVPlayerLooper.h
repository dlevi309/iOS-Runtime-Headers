/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(NSError *)error;
-(id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)_turnOffLooping;
-(BOOL)_setupLoopingReturningError:(id*)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(int)_calculateNumberOfCopiesNeeded;
-(void)_configureLoopingItem:(id)arg1 ;
-(BOOL)_isWaitingForLastCopyToFinishSet;
-(void)_cleanupAfterPlayingLastLoopingCopy;
-(void)disableLooping;
-(NSArray *)loopingPlayerItems;
-(long long)loopCount;
-(long long)status;
-(void)dealloc;
@end

