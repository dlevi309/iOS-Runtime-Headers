/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _protocolVersion;
	NSMutableArray* _airplayReceivers;
	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleVersion;
	NSData* _bluetoothAddress;
	NSString* _clusterID;
	NSString* _clusterLeaderID;
	unsigned _clusterType;
	int _deviceClass;
	NSString* _deviceUID;
	NSString* _groupName;
	NSString* _groupUID;
	NSMutableArray* _groupedDevices;
	unsigned _lastSupportedMessageType;
	NSString* _linkAgent;
	NSString* _localizedModelName;
	unsigned _logicalDeviceCount;
	NSString* _managedConfigDeviceID;
	NSString* _modelID;
	NSString* _name;
	NSString* _senderDefaultGroupUID;
	unsigned _sharedQueueVersion;
	NSString* _systemBuildVersion;
	NSString* _systemMediaApplication;
	NSString* _systemPodcastApplication;
	NSString* _tightSyncUID;
	NSString* _uniqueIdentifier;
	BOOL _allowsPairing;
	BOOL _connected;
	BOOL _isAirplayActive;
	BOOL _isClusterAware;
	BOOL _isGroupLeader;
	BOOL _isProxyGroupPlayer;
	BOOL _supportsACL;
	BOOL _supportsExtendedMotion;
	BOOL _supportsSharedQueue;
	BOOL _supportsSystemPairing;
	BOOL _tightlySyncedGroup;
	SCD_Struct_MR22 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

