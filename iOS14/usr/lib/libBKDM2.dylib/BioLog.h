/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
@class NSString, NSDictionary, NSDateFormatter, NSObject, NSMutableData, NSMutableArray, NSMutableDictionary;

@interface BioLog : NSObject {

	BOOL _internal;
	NSString* _rootPath;
	NSString* _logPath;
	unsigned short _sequenceNumber;
	unsigned char _sequenceType;
	NSString* _sequencePath;
	NSString* _logContextBasePath;
	NSDictionary* _fileAttributes;
	NSDictionary* _fileAttributesProtected;
	NSDictionary* _fileAttributesAutoUpload;
	NSDateFormatter* _fileNameFormatter;
	NSDateFormatter* _milisecondsFormatter;
	NSObject*<OS_dispatch_queue> _retentionQueue;
	unsigned long long _retentionNewItemsSize;
	NSMutableData* _cropFrameBuffer;
	NSObject*<OS_dispatch_semaphore> _cropFrameBufferSemaphore;
	NSMutableArray* _scoreDataArray;
	unsigned short _computedSequenceNumberPair[2];
	unsigned short _lastComputedSequenceNumber;
	NSMutableDictionary* _allVsAllScoreDict;
	NSMutableArray* _allVsAllLogFileArray;

}
+(void)initialize;
+(void)scheduleDiagnosticLogsRemoval;
+(void)cancelDiagnosticLogsRemoval;
+(void)removeDiagnosticLogs;
+(void)removeDiagnosticLogsImmediately;
-(BOOL)isInternal;
-(id)sequencePathForId:(SCD_Struct_Bi5*)arg1 andSubdirectory:(id)arg2 ;
-(void)logTemplate:(id)arg1 withSequenceNumber:(unsigned short)arg2 date:(id)arg3 index:(unsigned char)arg4 toPath:(id)arg5 ;
-(id)logNameFromDate:(id)arg1 ;
-(void)logFrameDebug:(id)arg1 withBuffer:(id)arg2 ;
-(void)logInternalCameraFrame:(SCD_Struct_Bi14*)arg1 sensorRawData:(id)arg2 metaData:(id)arg3 ;
-(void)scheduleRetentionPolicy;
-(void)logSequenceDebug:(id)arg1 withContext:(SCD_Struct_Bi6*)arg2 ;
-(void)logSequenceInfo:(id)arg1 withContext:(SCD_Struct_Bi6*)arg2 orientation:(SCD_Struct_Bi15*)arg3 identities:(id)arg4 ;
-(id)logLogContextWithDate:(id)arg1 ;
-(void)logCameraFrame:(id)arg1 withBuffers:(id)arg2 ;
-(id)computeAllVsAllMatrixFromScoreDataArray:(id)arg1 sequenceNumber:(unsigned short)arg2 ;
-(id)sequencePathForId:(SCD_Struct_Bi5*)arg1 ;
-(void)logTemplate:(id)arg1 withContext:(SCD_Struct_Bi6*)arg2 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 purgeable:(BOOL)arg4 ;
-(void)logPasscodeValidatedWithUserID:(unsigned)arg1 ;
-(void)logTemplateList:(id)arg1 withTemplateSize:(unsigned long long)arg2 sequenceNumber:(unsigned short)arg3 date:(id)arg4 toPath:(id)arg5 ;
-(id)eventPathWithName:(id)arg1 date:(id)arg2 ;
-(void)logAllVsAllWithDate:(id)arg1 ;
-(void)logTemplateList:(id)arg1 withContext:(SCD_Struct_Bi6*)arg2 ;
-(void)logData:(id)arg1 withContext:(SCD_Struct_Bi6*)arg2 ;
-(void)logCameraFrame:(SCD_Struct_Bi14*)arg1 sensorRawData:(id)arg2 metaData:(id)arg3 ;
-(void)applyRetentionPolicy;
-(void)logRemoveIdentity:(id)arg1 withTemplateListData:(id)arg2 templateSize:(unsigned long long)arg3 client:(id)arg4 ;
-(id)initForInternalLogging:(BOOL)arg1 ;
@end

