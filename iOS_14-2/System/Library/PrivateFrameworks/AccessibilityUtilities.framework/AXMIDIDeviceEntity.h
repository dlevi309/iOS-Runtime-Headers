/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class AXMIDIDevice, NSMutableSet, NSNumber, NSString;

@interface AXMIDIDeviceEntity : NSObject {

	unsigned _midiEntity;
	AXMIDIDevice* _device;
	NSMutableSet* _sources;
	NSMutableSet* _destinations;
	NSNumber* _supportsMMC;

}

@property (assign,nonatomic) unsigned midiEntity;                           //@synthesize midiEntity=_midiEntity - In the implementation block
@property (nonatomic,retain) NSMutableSet * sources;                        //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableSet * destinations;                   //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic,__weak) AXMIDIDevice * device;                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * uniqueID; 
@property (nonatomic,readonly) NSNumber * deviceID; 
@property (nonatomic,readonly) NSNumber * isEmbedded; 
@property (nonatomic,readonly) NSNumber * isBroadcast; 
@property (nonatomic,readonly) NSNumber * isOffline; 
@property (nonatomic,readonly) NSNumber * isPrivate; 
@property (nonatomic,readonly) NSString * driverName; 
@property (nonatomic,readonly) NSNumber * supportsGeneralMIDI; 
@property (nonatomic,readonly) NSNumber * supportsMMC;                      //@synthesize supportsMMC=_supportsMMC - In the implementation block
-(void)setSources:(NSMutableSet *)arg1 ;
-(NSNumber *)deviceID;
-(NSNumber *)uniqueID;
-(void)setDestinations:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destinations;
-(NSNumber *)isOffline;
-(NSMutableSet *)sources;
-(id)_sourceForMidiEndpoint:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(AXMIDIDevice *)device;
-(id)_destinationForMidiEndpoint:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(void)setMidiEntity:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(NSNumber *)isEmbedded;
-(NSNumber *)isPrivate;
-(NSNumber *)isBroadcast;
-(NSString *)driverName;
-(NSNumber *)supportsGeneralMIDI;
-(NSNumber *)supportsMMC;
-(void)addMidiSource:(unsigned)arg1 ;
-(void)removeMidiSource:(unsigned)arg1 ;
-(unsigned)midiEntity;
-(void)addMidiDestination:(unsigned)arg1 ;
-(void)removeMidiDestination:(unsigned)arg1 ;
-(id)initWithMIDIEntity:(unsigned)arg1 device:(id)arg2 ;
-(void)resetAndDetectEndpoints;
-(id)supportsGeneralMMC;
-(void)setDevice:(AXMIDIDevice *)arg1 ;
@end

