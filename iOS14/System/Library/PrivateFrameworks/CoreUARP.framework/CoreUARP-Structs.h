/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

typedef struct _NSZone* NSZoneRef;

typedef struct pcap* pcapRef;

typedef struct pcap_dumper* pcap_dumperRef;

typedef struct uarpPlatformOptionsObj {
	unsigned maxTxPayloadLength;
	unsigned maxRxPayloadLength;
	unsigned payloadWindowLength;
} uarpPlatformOptionsObj;

typedef struct uarpControllerCallbacksObj {
	/*function pointer*/void* fRequestBuffer;
	/*function pointer*/void* fReturnBuffer;
	/*function pointer*/void* fRequestTransmitMsgBuffer;
	/*function pointer*/void* fReturnTransmitMsgBuffer;
	/*function pointer*/void* fSendMessage;
	/*function pointer*/void* fAssetProcessingComplete;
	/*function pointer*/void* fUpdateInformationTLV;
	/*function pointer*/void* fRequestBytesFromAsset;
	/*function pointer*/void* fApplyStagedAssetsStatus;
	/*function pointer*/void* fVendorSpecific;
} uarpControllerCallbacksObj;

typedef struct uarpControllerObj {
	void pDelegate;
	void pVendorExtension;
	int nextRemoteAccessoryID;
	int nextAssetID;
	uarpPlatformOptionsObj options;
	uarpControllerCallbacksObj callbacks;
	uarpRemoteAccessoryObj pAccessoryList;
	uarpControllerAssetObj pAssetList;
} uarpControllerObj;

typedef struct uarpControllerAppleCallbacksObj {
	/*function pointer*/void* fPreparePersonalizationAsset;
	/*function pointer*/void* fPersonalizeAsset;
} uarpControllerAppleCallbacksObj;

typedef struct uarpControllerAppleObj {
	uarpControllerAppleCallbacksObj callbacks;
} uarpControllerAppleObj;

