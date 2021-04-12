/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSArray, NSMutableArray;

@interface MIDICISession : NSObject {

	unsigned _client;
	unsigned _entity;
	MIDICIDeviceIdentification _deviceIdentification;
	NSArray* _supportedProtocols;
	NSMutableArray* _profileStates;
	/*^block*/id _profileChangedCallback;
	/*^block*/id _propertyChangedCallback;
	/*^block*/id _propertyResponseCallback;
	BOOL _supportsProfileCapability;
	BOOL _supportsPropertyCapability;
	MIDICIDeviceIdentification _deviceID;
	unsigned _impl;

}

@property (nonatomic,readonly) unsigned entity;                                              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL supportsProfileCapability;                               //@synthesize supportsProfileCapability=_supportsProfileCapability - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertyCapability;                              //@synthesize supportsPropertyCapability=_supportsPropertyCapability - In the implementation block
@property (nonatomic,readonly) MIDICIDeviceIdentification deviceIdentification;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) id profileChangedCallback;                                        //@synthesize profileChangedCallback=_profileChangedCallback - In the implementation block
@property (nonatomic,copy) id propertyChangedCallback;                                       //@synthesize propertyChangedCallback=_propertyChangedCallback - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)entity;
-(void)handleCINotification:(const MIDINotification*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)addProfileState:(char*)arg1 length:(unsigned)arg2 channel:(unsigned char)arg3 ;
-(id)profileChangedCallback;
-(BOOL)updateProfileStateForChannel:(unsigned char)arg1 withProfile:(id)arg2 enabled:(BOOL)arg3 ;
-(id)propertyChangedCallback;
-(BOOL)toggleProfile:(id)arg1 onChannel:(unsigned char)arg2 enabling:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithMIDIEntity:(unsigned)arg1 dataReadyHandler:(/*^block*/id)arg2 ;
-(id)profileStateForChannel:(unsigned char)arg1 ;
-(BOOL)enableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)disableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3 ;
-(void)hasProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)getProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsProfileCapability;
-(BOOL)supportsPropertyCapability;
-(MIDICIDeviceIdentification)deviceIdentification;
-(void)setProfileChangedCallback:(id)arg1 ;
-(void)setPropertyChangedCallback:(id)arg1 ;
@end

