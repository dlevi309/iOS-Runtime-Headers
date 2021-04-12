/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol OS_nw_connection, OS_nw_path_evaluator;
#import <IDS/IDS-Structs.h>
@class NSObject, IDSDataChannelLinkContext, NSMutableDictionary, NSData, NSMutableArray;

@interface _IDSDatagramChannel : NSObject {

	BOOL _verboseFunctionalLogging;
	int _socketDescriptor;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	BOOL _connected;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _readLock;
	BOOL _isInvalidated;
	NSObject*<OS_nw_connection> _connection;
	BOOL _hasMetadata;
	BOOL _sentFirstReadLinkInfo;
	BOOL _receivedPreConnectionData;
	BOOL _waitForPreConnectionDataForConnected;
	BOOL _startCalled;
	BOOL _startAutomatically;
	int _osChannelFD;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	channelRef _osChannel;
	channel_ring_descRef _osChannelTXRing;
	channel_ring_descRef _osChannelRXRing;
	unsigned char _nexus_instance[16];
	IDSDataChannelLinkContext* _cellularLink;
	NSMutableDictionary* _linkContexts;
	char _defaultLinkID;
	NSData* _preConnectionData;
	NSMutableArray* _sendingMetadata;
	BOOL _needsMediaEncryptionInfo;
	unsigned long long _outgoingBytes;
	unsigned long long _incomingBytes;
	double _lastOutgoingStatReport;
	double _lastIncomingStatReport;
	NSMutableDictionary* _MKIArrivalTime;
	NSMutableDictionary* _firstPacketArrivalTimeForMKI;

}
-(id)init;
@end

