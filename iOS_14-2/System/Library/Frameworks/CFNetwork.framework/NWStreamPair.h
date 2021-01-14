/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__CFNCoreLoggable.h>

@protocol OS_nw_connection, OS_dispatch_queue;
@class NSObject;

@interface NWStreamPair : __CFNCoreLoggable {

	NSObject*<OS_nw_connection> _connection;
	PerSide_CFReadStream* _rs;
	PerSide_CFWriteStream* _ws;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _doneInitialRead;
	CFErrorRef _readError;
	CFErrorRef _writeError;
	ReadBuffer* _readData;
	unsigned char _atEOF;
	unsigned char _wsClosing;
	unsigned char _rsClosing;
	CFDataRef _cachedPeerName;
	SecTrustRef _cachedTrust;
	CFArrayRef _cachedPeerCerts;
	long long _outstandingWrites;

}
-(void)dealloc;
@end

