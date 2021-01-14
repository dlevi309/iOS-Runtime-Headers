/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class CBPeripheral, NSNumber, NSString, NSData, NSMutableDictionary, NSMapTable;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {

	BOOL _notifyingCharacteristicUpdated;
	BOOL _monitorState;
	double _lastSeen;
	CBPeripheral* _peripheral;
	NSNumber* _statusFlags;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _categoryIdentifier;
	NSString* _identifier;
	NSData* _setupHash;
	unsigned long long _advertisementFormat;
	NSMutableDictionary* _cachedDescriptors;
	NSMapTable* _cachedCharacteristicSignatures;
	NSMapTable* _cachedServiceSignatures;
	unsigned long long _connectionPriority;

}

@property (nonatomic,readonly) double lastSeen;                                          //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                  //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) NSNumber * statusFlags;                                     //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSNumber * configNumber;                                    //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIdentifier;                              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                                       //@synthesize setupHash=_setupHash - In the implementation block
@property (assign,nonatomic) unsigned long long advertisementFormat;                     //@synthesize advertisementFormat=_advertisementFormat - In the implementation block
@property (assign,nonatomic) BOOL notifyingCharacteristicUpdated;                        //@synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedDescriptors;                  //@synthesize cachedDescriptors=_cachedDescriptors - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedCharacteristicSignatures;              //@synthesize cachedCharacteristicSignatures=_cachedCharacteristicSignatures - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedServiceSignatures;                     //@synthesize cachedServiceSignatures=_cachedServiceSignatures - In the implementation block
@property (assign,nonatomic) BOOL monitorState;                                          //@synthesize monitorState=_monitorState - In the implementation block
@property (assign,nonatomic) unsigned long long connectionPriority;                      //@synthesize connectionPriority=_connectionPriority - In the implementation block
-(void)setCategoryIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)categoryIdentifier;
-(void)setStatusFlags:(NSNumber *)arg1 ;
-(double)lastSeen;
-(NSNumber *)statusFlags;
-(id)description;
-(BOOL)monitorState;
-(CBPeripheral *)peripheral;
-(NSString *)identifier;
-(void)setMonitorState:(BOOL)arg1 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(NSData *)setupHash;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)configNumber;
-(void)setConfigNumber:(NSNumber *)arg1 ;
-(void)updateWithPeripheral:(id)arg1 ;
-(void)setConnectionPriority:(unsigned long long)arg1 ;
-(id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8 ;
-(void)updatePairedPeripheralConfiguration:(BOOL)arg1 connectionPriority:(unsigned long long)arg2 ;
-(unsigned long long)advertisementFormat;
-(void)setAdvertisementFormat:(unsigned long long)arg1 ;
-(BOOL)notifyingCharacteristicUpdated;
-(void)setNotifyingCharacteristicUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedDescriptors;
-(NSMapTable *)cachedCharacteristicSignatures;
-(NSMapTable *)cachedServiceSignatures;
-(unsigned long long)connectionPriority;
@end

