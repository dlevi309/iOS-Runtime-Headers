/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol AXSwitchRegistrarDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class AXSwitch, AXMIDIManager;

@interface AXSwitchRegistrar : NSObject {

	BOOL _addLongPressSwitch;
	id<AXSwitchRegistrarDelegate> _delegate;
	AXSwitch* _aSwitch;
	IOHIDDeviceRef _device;
	IOHIDEventSystemClientRef _eventSystemClient;
	IOHIDManagerRef _manager;
	AXMIDIManager* _midiManager;

}

@property (nonatomic,retain) AXSwitch * aSwitch;                                         //@synthesize aSwitch=_aSwitch - In the implementation block
@property (nonatomic,retain) IOHIDDeviceRef device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef eventSystemClient;                //@synthesize eventSystemClient=_eventSystemClient - In the implementation block
@property (nonatomic,retain) IOHIDManagerRef manager;                                    //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) AXMIDIManager * midiManager;                                //@synthesize midiManager=_midiManager - In the implementation block
@property (assign,nonatomic,__weak) id<AXSwitchRegistrarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL addLongPressSwitch;                                    //@synthesize addLongPressSwitch=_addLongPressSwitch - In the implementation block
-(void)_handleApplicationWillResignActive:(id)arg1 ;
-(BOOL)_isMFISwitchWithButtonNumber:(unsigned)arg1 longPress:(BOOL)arg2 ;
-(id)_keyboardMatching;
-(id)_mfiMatching;
-(void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 source:(id)arg4 ;
-(void)setMidiManager:(AXMIDIManager *)arg1 ;
-(void)beginFilteringEvents;
-(void)endFilteringEvents;
-(BOOL)isSwitchWithName:(id)arg1 ;
-(id)firstAvailableName;
-(void)_handleKeyboardKeyDownEvent:(IOHIDEventRef)arg1 ;
-(void)_handleATVRemoteButtonDownEvent:(IOHIDEventRef)arg1 ;
-(void)_handleMFIButtonDownValue:(IOHIDValueRef)arg1 ;
-(id)_atvRemoteMatching;
-(void)setAddLongPressSwitch:(BOOL)arg1 ;
-(AXMIDIManager *)midiManager;
-(id)init;
-(id<AXSwitchRegistrarDelegate>)delegate;
-(void)setManager:(IOHIDManagerRef)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(IOHIDDeviceRef)device;
-(void)setDelegate:(id<AXSwitchRegistrarDelegate>)arg1 ;
-(AXSwitch *)aSwitch;
-(IOHIDManagerRef)manager;
-(void)setDevice:(IOHIDDeviceRef)arg1 ;
-(void)setEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(void)dealloc;
-(void)setASwitch:(AXSwitch *)arg1 ;
-(void)_filterEvents:(BOOL)arg1 ;
-(BOOL)_isSwitchWithSource:(id)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned)arg3 ATVRemoteButtonUsage:(long long)arg4 midiEvent:(id)arg5 ;
-(BOOL)addLongPressSwitch;
-(BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(BOOL)arg2 ;
-(BOOL)_isMIDISwitchWithMidiEvent:(id)arg1 ;
-(BOOL)_isATVRemoteButtonSwitchWithUsage:(long long)arg1 longPress:(BOOL)arg2 ;
@end

