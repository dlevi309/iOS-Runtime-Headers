/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
@class NSString, NSDictionary, NSDateFormatter, NSObject, NSMutableData;

@interface BioLog : NSObject {

	BOOL _internal;
	NSString* _rootPath;
	NSString* _logPath;
	unsigned short _sequenceNumber;
	unsigned char _sequenceType;
	NSString* _sequencePath;
	NSDictionary* _fileAttributes;
	NSDictionary* _fileAttributesProtected;
	NSDictionary* _fileAttributesAutoUpload;
	NSDateFormatter* _fileNameFormatter;
	NSDateFormatter* _milisecondsFormatter;
	NSObject*<OS_dispatch_queue> _retentionQueue;
	unsigned long long _retentionNewItemsSize;
	NSMutableData* _cropFrameBuffer;
	NSObject*<OS_dispatch_semaphore> _cropFrameBufferSemaphore;

}
+(void)initialize;
+(void)scheduleDiagnosticLogsRemoval;
+(void)removeDiagnosticLogsImmediately;
+(void)cancelDiagnosticLogsRemoval;
+(void)removeDiagnosticLogs;
-(BOOL)isInternal;
-(void)logPasscodeValidatedWithUserID:(unsigned)arg1 ;
-(id)initForInternalLogging:(BOOL)arg1 ;
-(void)logCameraFrame:(id)arg1 withBuffers:(id)arg2 ;
-(void)logFrameDebug:(id)arg1 withBuffer:(id)arg2 ;
-(void)logSequenceDebug:(id)arg1 withContext:(SCD_Struct_Bi5*)arg2 ;
-(void)logData:(id)arg1 withContext:(SCD_Struct_Bi5*)arg2 ;
-(void)logTemplateList:(id)arg1 withContext:(SCD_Struct_Bi5*)arg2 ;
-(void)logSequenceInfo:(id)arg1 withContext:(SCD_Struct_Bi5*)arg2 orientation:(SCD_Struct_Bi11*)arg3 identities:(id)arg4 ;
-(void)logCameraFrame:(SCD_Struct_Bi14*)arg1 sensorRawData:(id)arg2 metaData:(id)arg3 ;
-(void)logRemoveIdentity:(id)arg1 withTemplateListData:(id)arg2 templateSize:(unsigned long long)arg3 client:(id)arg4 ;
-(id)logNameFromDate:(id)arg1 ;
-(void)logLogContextWithDate:(id)arg1 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 purgeable:(BOOL)arg4 ;
-(void)applyRetentionPolicy;
-(void)scheduleRetentionPolicy;
-(id)sequencePathForId:(SCD_Struct_Bi4*)arg1 ;
-(void)logInternalCameraFrame:(SCD_Struct_Bi14*)arg1 sensorRawData:(id)arg2 metaData:(id)arg3 ;
-(void)logTemplate:(id)arg1 withSequenceNumber:(unsigned short)arg2 date:(id)arg3 index:(unsigned char)arg4 toPath:(id)arg5 ;
-(void)logTemplateList:(id)arg1 withTemplateSize:(unsigned long long)arg2 sequenceNumber:(unsigned short)arg3 date:(id)arg4 toPath:(id)arg5 ;
-(id)eventPathWithName:(id)arg1 date:(id)arg2 ;
-(id)sequencePathForId:(SCD_Struct_Bi4*)arg1 andSubdirectory:(id)arg2 ;
-(void)logTemplate:(id)arg1 withContext:(SCD_Struct_Bi5*)arg2 ;
@end

