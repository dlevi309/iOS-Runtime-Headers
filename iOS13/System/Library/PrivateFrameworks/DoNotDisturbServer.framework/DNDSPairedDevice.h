/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject <NSCopying> {

	NSString* _deviceIdentifier;
	unsigned long long _deviceClass;
	unsigned long long _syncProtocolVersion;
	NSUUID* _pairingIdentifier;
	NSString* _pairingDataStore;

}

@property (nonatomic,copy,readonly) NSUUID * pairingIdentifier;                     //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingDataStore;                    //@synthesize pairingDataStore=_pairingDataStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceClass;                      //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long syncProtocolVersion;              //@synthesize syncProtocolVersion=_syncProtocolVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceIdentifier;
-(unsigned long long)deviceClass;
-(NSUUID *)pairingIdentifier;
-(NSString *)pairingDataStore;
-(unsigned long long)syncProtocolVersion;
-(id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5 ;
@end

