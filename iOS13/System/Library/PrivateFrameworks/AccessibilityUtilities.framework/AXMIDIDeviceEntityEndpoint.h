/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class AXMIDIDeviceEntity, NSString, NSNumber;

@interface AXMIDIDeviceEntityEndpoint : NSObject {

	unsigned _midiEndpoint;
	AXMIDIDeviceEntity* _entity;

}

@property (assign,nonatomic) unsigned midiEndpoint;                           //@synthesize midiEndpoint=_midiEndpoint - In the implementation block
@property (assign,nonatomic,__weak) AXMIDIDeviceEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSNumber * uniqueID; 
@property (nonatomic,readonly) NSNumber * receiveChannels; 
@property (nonatomic,readonly) NSNumber * transmitChannels; 
@property (nonatomic,readonly) NSNumber * isEmbedded; 
@property (nonatomic,readonly) NSNumber * isBroadcast; 
@property (nonatomic,readonly) NSNumber * isOffline; 
@property (nonatomic,readonly) NSNumber * isPrivate; 
@property (nonatomic,readonly) NSString * driverName; 
-(id)description;
-(NSString *)name;
-(NSNumber *)uniqueID;
-(NSString *)model;
-(void)setEntity:(AXMIDIDeviceEntity *)arg1 ;
-(AXMIDIDeviceEntity *)entity;
-(NSNumber *)isPrivate;
-(NSString *)manufacturer;
-(id)initWithMIDIEndpoint:(unsigned)arg1 entity:(id)arg2 ;
-(NSNumber *)receiveChannels;
-(NSNumber *)transmitChannels;
-(NSNumber *)isEmbedded;
-(NSNumber *)isBroadcast;
-(NSNumber *)isOffline;
-(NSString *)driverName;
-(unsigned)midiEndpoint;
-(void)setMidiEndpoint:(unsigned)arg1 ;
@end

