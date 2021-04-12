/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>

@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;
@class AVAudioClient, NSObject, NSHashTable, AVAudioDevice, NSArray, NSString;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {

	AVAudioClient* _audioClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSHashTable* _delegates;
	id<TUAudioDeviceControllerActions> _actionsDelegate;

}

@property (nonatomic,retain) AVAudioClient * audioClient;                                            //@synthesize audioClient=_audioClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                                //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic,__weak) id<TUAudioDeviceControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice; 
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * inputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSArray *)devices;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)inputDevices;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(NSArray *)outputDevices;
-(id<TUAudioDeviceControllerActions>)actionsDelegate;
-(void)setActionsDelegate:(id<TUAudioDeviceControllerActions>)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(AVAudioDevice *)currentInputDevice;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioClient *)audioClient;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioDevice *)currentOutputDevice;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(void)choosePreferredDeviceIfNecessary;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
@end

