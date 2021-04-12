/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSOperationQueue, NSMutableArray, NSError;

@interface ML3DatabaseImportManager : NSObject {

	NSOperationQueue* _importOperationQueue;
	NSMutableArray* _suspendedImportOperations;
	NSError* _lastImportError;

}

@property (nonatomic,retain) NSError * lastImportError;                                  //@synthesize lastImportError=_lastImportError - In the implementation block
@property (nonatomic,readonly) unsigned long long operationsCount; 
@property (nonatomic,readonly) unsigned long long suspendedOperationsCount; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(BOOL)isSuspended;
-(id)init;
-(id)_importOperations;
-(void)_handleImportOperationCancelled:(id)arg1 ;
-(void)_handleImportOperationCompleted:(id)arg1 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)operationsCount;
-(unsigned long long)suspendedOperationsCount;
-(float)currentOperationProgressWithError:(id*)arg1 ;
-(void)cancelAllImportOperations;
-(void)cancelImportOperationsOriginatingFromClient:(id)arg1 ;
-(void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)suspendImportOperations;
-(void)resumeSuspendedImportOperations;
-(id)_suspendedImportOperations;
-(NSError *)lastImportError;
-(void)setLastImportError:(NSError *)arg1 ;
@end

