/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol MSPauseManagerDelegate;
@class NSMutableDictionary;

@interface MSPauseManager : NSObject {

	NSMutableDictionary* _UUIDToTimerMap;
	id<MSPauseManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPauseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id<MSPauseManagerDelegate>)delegate;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)_timerDidFire:(id)arg1 ;
-(void)_addPauseUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
@end

