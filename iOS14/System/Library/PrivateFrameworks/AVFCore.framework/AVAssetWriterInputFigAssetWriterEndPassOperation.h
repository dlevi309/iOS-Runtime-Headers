/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>

@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	AVAssetWriterInputPassDescription* _nextPassDescription;

}

@property (nonatomic,readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;              //@synthesize nextPassDescription=_nextPassDescription - In the implementation block
-(id)init;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 trackID:(int)arg2 ;
-(AVAssetWriterInputPassDescription *)descriptionForNextPass;
-(void)start;
-(void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3 ;
-(BOOL)isAsynchronous;
-(void)dealloc;
@end

