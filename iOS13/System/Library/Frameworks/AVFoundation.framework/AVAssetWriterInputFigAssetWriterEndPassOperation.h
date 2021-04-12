/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>

@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	AVAssetWriterInputPassDescription* _nextPassDescription;

}

@property (nonatomic,readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;              //@synthesize nextPassDescription=_nextPassDescription - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 trackID:(int)arg2 ;
-(AVAssetWriterInputPassDescription *)descriptionForNextPass;
-(void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3 ;
@end

