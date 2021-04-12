/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingControllerDelegate.h>

@protocol MRMigrationDeviceDelegate, OS_dispatch_queue;
@class NSError, MRNowPlayingController, NSObject, NSString, MRAVEndpoint, MRNowPlayingPlayerResponse;

@interface MRMigrationDevice : NSObject <MRNowPlayingControllerDelegate> {

	unsigned long long _deviceState;
	NSError* _prepareError;
	id<MRMigrationDeviceDelegate> _delegate;
	MRNowPlayingController* _controller;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) MRNowPlayingController * controller;                        //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned long long deviceState;                             //@synthesize deviceState=_deviceState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSError * prepareError;                                     //@synthesize prepareError=_prepareError - In the implementation block
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) MRAVEndpoint * endpoint; 
@property (nonatomic,readonly) MRNowPlayingPlayerResponse * playerState; 
@property (assign,nonatomic,__weak) id<MRMigrationDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proactiveDevice;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(id<MRMigrationDeviceDelegate>)delegate;
-(MRAVEndpoint *)endpoint;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setController:(MRNowPlayingController *)arg1 ;
-(id)initWithUID:(id)arg1 ;
-(void)setDelegate:(id<MRMigrationDeviceDelegate>)arg1 ;
-(void)_notifyDelegateOfStateChange;
-(void)_notifyDelegateOfPlayerStateChange;
-(NSString *)description;
-(void)controller:(id)arg1 didLoadResponse:(id)arg2 ;
-(void)controller:(id)arg1 didUpdateResponse:(id)arg2 ;
-(void)controllerWillReloadForInvalidation:(id)arg1 ;
-(void)controller:(id)arg1 didFailWithError:(id)arg2 ;
-(unsigned long long)deviceState;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSError *)prepareError;
-(void)setPrepareError:(NSError *)arg1 ;
-(MRNowPlayingController *)controller;
-(void)setDeviceState:(unsigned long long)arg1 ;
-(void)prepare;
-(MRNowPlayingPlayerResponse *)playerState;
@end

