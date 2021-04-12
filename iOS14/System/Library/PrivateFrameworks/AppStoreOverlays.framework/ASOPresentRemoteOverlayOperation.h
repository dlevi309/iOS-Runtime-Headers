/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <Foundation/NSOperation.h>

@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	ASORemoteOverlay* _remoteOverlay;

}

@property (assign) BOOL isExecuting;                                        //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) ASORemoteOverlay * remoteOverlay;              //@synthesize remoteOverlay=_remoteOverlay - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)cancel;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)finishExecuting;
-(ASORemoteOverlay *)remoteOverlay;
-(id)initWithRemoteOverlay:(id)arg1 ;
-(void)setRemoteOverlay:(ASORemoteOverlay *)arg1 ;
@end

