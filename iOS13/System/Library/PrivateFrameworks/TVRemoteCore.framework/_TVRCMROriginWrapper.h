/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCMROriginDelegate;
@interface _TVRCMROriginWrapper : NSObject {

	void* _origin;
	BOOL _isObserving;
	id<_TVRCMROriginDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMROriginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_TVRCMROriginDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMROriginDelegate>)arg1 ;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 ;
-(id)initWithOrigin:(void*)arg1 ;
-(void)endObservingUpdates;
-(void)startObservingUpdates;
-(BOOL)isEqualToOriginRef:(void*)arg1 ;
-(void)getPickedRouteHasVolumeControl:(/*^block*/id)arg1 ;
-(void)_supportedCommandsChanged:(id)arg1 ;
-(void)getSupportedCommands:(/*^block*/id)arg1 ;
-(void)_fetchAndReportSupportedCommands;
@end

