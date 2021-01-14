/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_io, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface PLCoreDataFileRecorder : NSObject {

	NSMutableDictionary* _observationCountByStatementSQL;
	NSMutableDictionary* _observationCountByBacktraceHash;
	os_unfair_lock_s _observationsLock;
	NSObject*<OS_dispatch_io> _file;
	NSObject*<OS_dispatch_queue> _writingQueue;

}
+(void)_writeEntries:(id)arg1 toFile:(id)arg2 usingQueue:(id)arg3 ;
+(void)_writeRecordingPostambleUsingQueue:(id)arg1 toFile:(id)arg2 ;
+(unsigned long long)_callStackHash;
+(id)_chooseFileURLFromFileURL:(id)arg1 ;
+(id)_jsonFragmentFromEntry:(id)arg1 ;
-(BOOL)stopRecording;
-(id)init;
-(void)_decorateEntry:(id)arg1 ;
-(void)_installSignalHandler;
-(void)_reconsiderRecordingState;
-(BOOL)startRecordingToFileURL:(id)arg1 withTag:(id)arg2 ;
@end

