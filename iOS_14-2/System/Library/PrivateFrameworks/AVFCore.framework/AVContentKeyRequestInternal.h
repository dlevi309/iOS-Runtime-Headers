/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
	BOOL hasAnyKeyRequestSucceeded;

}
@end

