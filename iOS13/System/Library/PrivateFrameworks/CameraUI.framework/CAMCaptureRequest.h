/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMDistinctPersistenceCopying.h>

@class CLLocation, CLHeading, NSURL, NSString;

@interface CAMCaptureRequest : NSObject <NSCopying, CAMDistinctPersistenceCopying> {

	long long _videoEncodingBehavior;
	long long _photoEncodingBehavior;
	long long _origin;
	unsigned _assertionIdentifier;
	BOOL _capturedFromPhotoBooth;
	CLLocation* _location;
	CLHeading* _heading;
	long long _persistenceOptions;
	unsigned long long _deferredPersistenceOptions;
	long long _temporaryPersistenceOptions;
	NSURL* _localDestinationURL;
	NSString* _persistenceUUID;
	BOOL _shouldExtractDiagnosticsFromMetadata;
	BOOL _shouldPersistDiagnosticsToSidecar;
	BOOL _shouldDelayRemotePersistence;
	unsigned short _sessionIdentifier;
	long long _captureDevice;
	long long _captureMode;
	long long _captureOrientation;
	long long _pressType;
	long long _type;

}

@property (nonatomic,readonly) long long videoEncodingBehavior;                            //@synthesize videoEncodingBehavior=_videoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                            //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) long long origin;                                           //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned assertionIdentifier;                               //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL capturedFromPhotoBooth;                                //@synthesize capturedFromPhotoBooth=_capturedFromPhotoBooth - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) long long persistenceOptions;                               //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long deferredPersistenceOptions;              //@synthesize deferredPersistenceOptions=_deferredPersistenceOptions - In the implementation block
@property (nonatomic,readonly) long long temporaryPersistenceOptions;                      //@synthesize temporaryPersistenceOptions=_temporaryPersistenceOptions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                           //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistenceUUID;                            //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistToIncomingDirectory; 
@property (nonatomic,readonly) BOOL shouldProtectPersistence; 
@property (nonatomic,readonly) BOOL shouldProtectPersistenceForVideo; 
@property (nonatomic,readonly) BOOL shouldExtractDiagnosticsFromMetadata;                  //@synthesize shouldExtractDiagnosticsFromMetadata=_shouldExtractDiagnosticsFromMetadata - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistDiagnosticsToSidecar;                     //@synthesize shouldPersistDiagnosticsToSidecar=_shouldPersistDiagnosticsToSidecar - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayRemotePersistence;                          //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                               //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long captureDevicePosition; 
@property (nonatomic,readonly) long long captureMode;                                      //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,readonly) long long pressType;                                        //@synthesize pressType=_pressType - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPersistToIncomingDirectoryWithPersistenceOptions:(long long)arg1 temporaryPersistenceOptions:(long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(CLLocation *)location;
-(id)initWithType:(long long)arg1 ;
-(long long)origin;
-(CLHeading *)heading;
-(unsigned short)sessionIdentifier;
-(long long)pressType;
-(long long)captureDevice;
-(long long)captureDevicePosition;
-(long long)photoEncodingBehavior;
-(long long)captureOrientation;
-(BOOL)capturedFromPhotoBooth;
-(NSString *)persistenceUUID;
-(long long)videoEncodingBehavior;
-(long long)persistenceOptions;
-(long long)temporaryPersistenceOptions;
-(long long)captureMode;
-(BOOL)shouldDelayRemotePersistence;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(NSURL *)localDestinationURL;
-(unsigned long long)deferredPersistenceOptions;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(BOOL)shouldPersistDiagnosticsToSidecar;
-(unsigned)assertionIdentifier;
-(BOOL)shouldProtectPersistence;
-(id)distinctPersistenceCopy;
-(BOOL)shouldPersistToIncomingDirectory;
-(BOOL)shouldProtectPersistenceForVideo;
@end

