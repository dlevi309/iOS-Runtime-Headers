/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSCloudKitMirroringImportRequest, NSCloudKitMirroringExportRequest, NSCloudKitMirroringDelegateSetupRequest, NSCloudKitMirroringDelegateResetRequest, NSCloudKitMirroringResetZoneRequest, NSCloudKitMirroringFetchRecordsRequest, NSCloudKitMirroringResetMetadataRequest, NSCloudKitMirroringDelegateSerializationRequest, NSCloudKitMirroringInitializeSchemaRequest, NSCloudKitMirroringExportProgressRequest, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringRequestManager : NSObject {

	NSCloudKitMirroringImportRequest* _pendingImportRequest;
	NSCloudKitMirroringExportRequest* _pendingExportRequest;
	NSCloudKitMirroringDelegateSetupRequest* _pendingSetupRequest;
	NSCloudKitMirroringDelegateResetRequest* _pendingDelegateResetRequest;
	NSCloudKitMirroringResetZoneRequest* _pendingResetRequest;
	NSCloudKitMirroringFetchRecordsRequest* _pendingFetchRecordsRequest;
	NSCloudKitMirroringResetMetadataRequest* _pendingResetMetadataRequest;
	NSCloudKitMirroringDelegateSerializationRequest* _pendingSerializationRequest;
	NSCloudKitMirroringInitializeSchemaRequest* _pendingInitializeSchemaRequest;
	NSCloudKitMirroringExportProgressRequest* _pendingExportProgressRequest;
	NSCloudKitMirroringRequest* _activeRequest;

}

@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * pendingImportRequest;                                    //@synthesize pendingImportRequest=_pendingImportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportRequest * pendingExportRequest;                                    //@synthesize pendingExportRequest=_pendingExportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSetupRequest * pendingSetupRequest;                              //@synthesize pendingSetupRequest=_pendingSetupRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateResetRequest * pendingDelegateResetRequest;                      //@synthesize pendingDelegateResetRequest=_pendingDelegateResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetZoneRequest * pendingResetRequest;                                  //@synthesize pendingResetRequest=_pendingResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringFetchRecordsRequest * pendingFetchRecordsRequest;                        //@synthesize pendingFetchRecordsRequest=_pendingFetchRecordsRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetMetadataRequest * pendingResetMetadataRequest;                      //@synthesize pendingResetMetadataRequest=_pendingResetMetadataRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringRequest * activeRequest;                                                 //@synthesize activeRequest=_activeRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSerializationRequest * pendingSerializationRequest;              //@synthesize pendingSerializationRequest=_pendingSerializationRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringInitializeSchemaRequest * pendingInitializeSchemaRequest;                //@synthesize pendingInitializeSchemaRequest=_pendingInitializeSchemaRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportProgressRequest * pendingExportProgressRequest;                    //@synthesize pendingExportProgressRequest=_pendingExportProgressRequest - In the implementation block
-(NSCloudKitMirroringResetZoneRequest *)pendingResetRequest;
-(id)dequeueAllPendingRequests;
-(NSCloudKitMirroringDelegateResetRequest *)pendingDelegateResetRequest;
-(NSCloudKitMirroringRequest *)activeRequest;
-(BOOL)enqueueRequest:(id)arg1 error:(id*)arg2 ;
-(NSCloudKitMirroringInitializeSchemaRequest *)pendingInitializeSchemaRequest;
-(void)requestFinished:(id)arg1 ;
-(NSCloudKitMirroringDelegateSetupRequest *)pendingSetupRequest;
-(NSCloudKitMirroringFetchRecordsRequest *)pendingFetchRecordsRequest;
-(id)dequeueNextRequest;
-(NSCloudKitMirroringExportRequest *)pendingExportRequest;
-(NSCloudKitMirroringImportRequest *)pendingImportRequest;
-(NSCloudKitMirroringResetMetadataRequest *)pendingResetMetadataRequest;
-(NSCloudKitMirroringDelegateSerializationRequest *)pendingSerializationRequest;
-(void)dealloc;
-(NSCloudKitMirroringExportProgressRequest *)pendingExportProgressRequest;
@end

