/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MSPauseManagerDelegate>)delegate;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(void)_addPauseUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
@end

