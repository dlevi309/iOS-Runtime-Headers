/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV1;

typedef struct {
	unsigned macAddress : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV2;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV4;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned timeRemaining : 1;
	unsigned timestamp : 1;
	unsigned totalDuration : 1;
	unsigned likedState : 1;
	unsigned mediaKind : 1;
	unsigned playbackState : 1;
	unsigned revisionNumber : 1;
	unsigned scrubbableState : 1;
	unsigned canSkipNext : 1;
	unsigned canSkipPrevious : 1;
	unsigned canWishlist : 1;
	unsigned hasChapterData : 1;
	unsigned likeable : 1;
} SCD_Struct_TV7;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned field1;
	unsigned long long field2;
} SCD_Struct_TV9;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned likeState : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV10;

typedef struct __SecKey* SecKeyRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct __CFError* CFErrorRef;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

