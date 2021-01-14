/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)deviceIdentifier;
-(NSUUID *)pairingIdentifier;
-(unsigned long long)deviceClass;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)syncProtocolVersion;
-(NSString *)pairingDataStore;
-(id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5 ;
@end

