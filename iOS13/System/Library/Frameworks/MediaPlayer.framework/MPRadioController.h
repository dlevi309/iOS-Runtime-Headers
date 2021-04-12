/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPClientRadioController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, BKSProcessAssertion, NSString;

@interface MPRadioController : NSObject <MPClientRadioController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	BOOL _hasLaunchedService;
	BOOL _isRadioAvailable;
	BKSProcessAssertion* _remoteProcessAssertion;
	/*^block*/id _remoteProcessAssertionCompletionHandler;
	long long _remoteProcessAssertionCount;

}

@property (getter=isRadioAvailable,nonatomic,readonly) BOOL radioAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)clientRadioControllerRadioAvailabilityDidChange:(BOOL)arg1 ;
-(void)clientRadioControllerRecentStationsDidChange;
-(BOOL)isRadioAvailable;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_beginRemoteProcessAssertionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_endRemoteProcessAssertion;
-(void)_setRadioAvailable:(BOOL)arg1 ;
-(void)_getConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

