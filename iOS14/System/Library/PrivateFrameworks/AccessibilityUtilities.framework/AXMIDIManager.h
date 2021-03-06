/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXMIDIDeviceProtocol.h>

@class AXMIDIParser, NSString, NSMutableSet;

@interface AXMIDIManager : NSObject <AXMIDIDeviceProtocol> {

	unsigned _midiClientRef;
	unsigned _midiInputPortRef;
	/*^block*/id _eventHandler;
	AXMIDIParser* _parser;
	NSString* _clientIdentifier;
	NSMutableSet* _devices;

}

@property (nonatomic,retain) AXMIDIParser * parser;                    //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * devices;                   //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) unsigned midiClientRef;                   //@synthesize midiClientRef=_midiClientRef - In the implementation block
@property (assign,nonatomic) unsigned midiInputPortRef;                //@synthesize midiInputPortRef=_midiInputPortRef - In the implementation block
@property (nonatomic,copy) id eventHandler;                            //@synthesize eventHandler=_eventHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(NSMutableSet *)devices;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setDevices:(NSMutableSet *)arg1 ;
-(id)init;
-(void)_handleObjectAddedNotification:(MIDIObjectAddRemoveNotification*)arg1 ;
-(void)_handleObjectRemovedNotification:(MIDIObjectAddRemoveNotification*)arg1 ;
-(void)_handlePropertyChangedNotification:(MIDIObjectPropertyChangeNotification*)arg1 ;
-(void)_handleThruConnectionsChangedNotification:(MIDIObjectPropertyChangeNotification*)arg1 ;
-(void)_handleSerialPortOwnerChangedNotification:(MIDIObjectPropertyChangeNotification*)arg1 ;
-(void)_handleIOErrorNotification:(MIDIIOErrorNotification*)arg1 ;
-(void)_resetAndDetectDevices;
-(id)_nameForMidiObjectType:(int)arg1 ;
-(id)_deviceForMidiDevice:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(void)_addMidiEntity:(unsigned)arg1 ;
-(void)_addMidiSource:(unsigned)arg1 ;
-(void)_addMidiDestination:(unsigned)arg1 ;
-(void)_removeMidiDevice:(unsigned)arg1 ;
-(void)_removeMidiEntity:(unsigned)arg1 ;
-(void)_removeMidiSource:(unsigned)arg1 ;
-(void)_removeMidiDestination:(unsigned)arg1 ;
-(void)printAttachedDevices;
-(unsigned)midiClientRef;
-(void)setMidiClientRef:(unsigned)arg1 ;
-(unsigned)midiInputPortRef;
-(void)setMidiInputPortRef:(unsigned)arg1 ;
-(AXMIDIParser *)parser;
-(void)device:(id)arg1 didRemoveEntity:(id)arg2 ;
-(void)device:(id)arg1 didAddEntity:(id)arg2 ;
-(void)device:(id)arg1 entity:(id)arg2 didAddSource:(id)arg3 ;
-(void)device:(id)arg1 entity:(id)arg2 didRemoveSource:(id)arg3 ;
-(void)device:(id)arg1 entity:(id)arg2 didAddDestination:(id)arg3 ;
-(void)device:(id)arg1 entity:(id)arg2 didRemoveDestination:(id)arg3 ;
-(NSString *)clientIdentifier;
-(void)setParser:(AXMIDIParser *)arg1 ;
-(void)dealloc;
@end

