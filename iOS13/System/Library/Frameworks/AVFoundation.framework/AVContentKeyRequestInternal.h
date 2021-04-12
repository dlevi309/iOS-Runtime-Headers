/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeySession, AVContentKeyReportGroup, NSData, NSDictionary, NSError, NSString;

@interface AVContentKeyRequestInternal : NSObject {

	AVContentKeySession* session;
	AVContentKeyReportGroup* reportGroup;
	id identifier;
	NSData* keyIDFromInitializationData;
	NSData* initializationData;
	long long status;
	int responseInfoSent;
	BOOL providesPersistableKey;
	NSDictionary* preloadingRequestOptions;
	OpaqueFigCPECryptorRef figCryptor;
	NSError* error;
	CFDictionaryRef requestInfo;
	unsigned long long customURLRequestID;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	BOOL isRenewalRequest;
	NSString* cryptorUUID;
	unsigned long long cryptorKeyRequestID;
	OpaqueFigSimpleMutexRef stateMutex;

}
@end

