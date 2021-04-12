/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDPlugin.h>

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSTimer;

@interface IOHIDUPSClass : IOHIDPlugin {

	IOUPSPlugInInterface_v140* _ups;
	IOHIDDeviceTimeStampedDeviceInterface* _device;
	IOHIDDeviceQueueInterface* _queue;
	IOHIDDeviceTransactionInterface* _transaction;
	NSMutableDictionary* _properties;
	NSMutableSet* _capabilities;
	NSMutableDictionary* _upsEvent;
	NSMutableDictionary* _debugInformation;
	SCD_Struct_IO7 _elements;
	NSMutableArray* _commandElements;
	NSMutableArray* _eventElements;
	/*function pointer*/void* _eventCallback;
	void* _eventTarget;
	void* _eventRefcon;
	NSTimer* _timer;
	CFRunLoopSourceRef _runLoopSource;

}
-(id)init;
-(void)dealloc;
-(int)stop;
-(int)sendCommand:(id)arg1 ;
-(int)getCapabilities:(const _CFSet*)arg1 ;
-(void)parseProperties:(id)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)probe:(id)arg1 service:(unsigned)arg2 outScore:(int*)arg3 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
-(id)copyElements:(id)arg1 psKey:(id)arg2 ;
-(void)updateElements:(id)arg1 ;
-(BOOL)updateEvent;
-(id)latestElement:(id)arg1 psKey:(id)arg2 ;
-(void)parseElements:(id)arg1 ;
-(void)valueAvailableCallback:(int)arg1 ;
-(int)getProperties:(const _CFDictionary*)arg1 ;
-(int)getEvent:(const _CFDictionary*)arg1 ;
-(int)setEventCallback:(/*function pointer*/void*)arg1 target:(void*)arg2 refcon:(void*)arg3 ;
-(int)createAsyncEventSource:(const void*)arg1 ;
@end

