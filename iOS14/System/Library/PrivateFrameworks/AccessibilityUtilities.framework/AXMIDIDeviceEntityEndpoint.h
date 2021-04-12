/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEntity:(AXMIDIDeviceEntity *)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(AXMIDIDeviceEntity *)entity;
-(NSNumber *)uniqueID;
-(NSNumber *)isOffline;
-(NSString *)name;
-(id)description;
-(NSNumber *)isEmbedded;
-(NSNumber *)isPrivate;
-(id)initWithMIDIEndpoint:(unsigned)arg1 entity:(id)arg2 ;
-(NSNumber *)receiveChannels;
-(NSNumber *)transmitChannels;
-(NSNumber *)isBroadcast;
-(NSString *)driverName;
-(unsigned)midiEndpoint;
-(void)setMidiEndpoint:(unsigned)arg1 ;
@end

