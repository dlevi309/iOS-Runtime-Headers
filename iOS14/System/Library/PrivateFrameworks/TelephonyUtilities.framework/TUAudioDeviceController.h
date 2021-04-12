/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<TUAudioDeviceControllerActions>)actionsDelegate;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)devices;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioDevice *)currentOutputDevice;
-(AVAudioDevice *)currentInputDevice;
-(NSString *)debugDescription;
-(void)setActionsDelegate:(id<TUAudioDeviceControllerActions>)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)inputDevices;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(NSArray *)outputDevices;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(AVAudioClient *)audioClient;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
@end

