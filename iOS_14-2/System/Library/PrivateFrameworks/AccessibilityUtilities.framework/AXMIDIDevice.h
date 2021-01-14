/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/AXMIDIDeviceEntityDelegate.h>

@protocol AXMIDIDeviceProtocol;
@class NSNumber, NSMutableSet, NSString;

@interface AXMIDIDevice : NSObject <AXMIDIDeviceEntityDelegate> {

	unsigned _midiDevice;
	id<AXMIDIDeviceProtocol> _delegate;
	NSNumber* _supportsMMC;
	NSMutableSet* _entities;

}

@property (assign,nonatomic) unsigned midiDevice;                                   //@synthesize midiDevice=_midiDevice - In the implementation block
@property (nonatomic,retain) NSMutableSet * entities;                               //@synthesize entities=_entities - In the implementation block
@property (assign,nonatomic,__weak) id<AXMIDIDeviceProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSNumber * uniqueID; 
@property (nonatomic,readonly) NSNumber * deviceID; 
@property (nonatomic,readonly) NSNumber * isOffline; 
@property (nonatomic,readonly) NSNumber * isPrivate; 
@property (nonatomic,readonly) NSString * driverName; 
@property (nonatomic,readonly) NSNumber * supportsGeneralMIDI; 
@property (nonatomic,readonly) NSNumber * supportsMMC;                              //@synthesize supportsMMC=_supportsMMC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)entities;
-(NSNumber *)deviceID;
-(NSString *)model;
-(NSString *)manufacturer;
-(NSNumber *)uniqueID;
-(id<AXMIDIDeviceProtocol>)delegate;
-(NSNumber *)isOffline;
-(id)fullDescription;
-(NSString *)name;
-(void)setDelegate:(id<AXMIDIDeviceProtocol>)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSNumber *)isPrivate;
-(NSString *)driverName;
-(NSNumber *)supportsGeneralMIDI;
-(NSNumber *)supportsMMC;
-(id)_entityForMidiEntity:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(void)addMidiSource:(unsigned)arg1 ;
-(void)removeMidiSource:(unsigned)arg1 ;
-(void)addMidiDestination:(unsigned)arg1 ;
-(void)removeMidiDestination:(unsigned)arg1 ;
-(void)entity:(id)arg1 didAddSource:(id)arg2 ;
-(void)entity:(id)arg1 didRemoveSource:(id)arg2 ;
-(void)entity:(id)arg1 didAddDestination:(id)arg2 ;
-(void)entity:(id)arg1 didRemoveDestination:(id)arg2 ;
-(id)initWithMIDIDevice:(unsigned)arg1 delegate:(id)arg2 ;
-(id)supportsGeneralMMC;
-(void)resetAndDetectEntities;
-(void)addMidiEntity:(unsigned)arg1 ;
-(void)removeMidiEntity:(unsigned)arg1 ;
-(unsigned)midiDevice;
-(void)setMidiDevice:(unsigned)arg1 ;
-(void)setEntities:(NSMutableSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

