/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol RSPeerToPeerConnectionControllerDataSource <NSObject>
@optional
-(void)stateForStateType:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2;

@required
-(id)localPeerDisplayName;
-(id)allowedRemotePeerDisplayNames;
-(id)supportedStateTypes;

@end

