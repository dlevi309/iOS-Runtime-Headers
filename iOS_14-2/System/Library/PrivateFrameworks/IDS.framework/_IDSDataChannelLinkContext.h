/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSUUID, NSData;

@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _networkType;
	long long _connectionType;
	unsigned _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned _remoteRATType;
	unsigned _maxBitrate;
	NSUUID* _linkUUID;
	NSUUID* _QRSessionID;
	long long _relayServerProvider;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	BOOL _serverIsDegraded;
	unsigned short _localLinkFlags;
	unsigned short _remoteLinkFlags;
	unsigned _localDataSoMask;
	unsigned _remoteDataSoMask;

}
-(id)description;
@end

