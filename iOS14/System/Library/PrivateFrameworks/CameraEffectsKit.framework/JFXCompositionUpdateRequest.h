/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/JFXCompositionPlayerRequest.h>

@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {

	BOOL _readyForDisplayReceived;
	BOOL _refreshCompletedReceived;

}

@property (nonatomic,readonly) BOOL hasCompleted; 
-(void)didBegin;
-(void)didCancel;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasCompleted;
-(void)didEnqueue;
-(void)didComplete;
-(void)setReadyForDisplayReceived;
-(void)setRefreshCompletedReceived;
@end

