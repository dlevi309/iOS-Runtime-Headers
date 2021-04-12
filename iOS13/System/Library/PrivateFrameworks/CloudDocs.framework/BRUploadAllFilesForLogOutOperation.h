/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, BRGlobalProgressProxy, NSMutableDictionary, NSMutableArray, NSOperationQueue, NSString;

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {

	BRGlobalProgressProxy* _progress;
	/*^block*/id _uploadAllFilesCompletionBlock;
	NSMutableDictionary* _errorsByContainerID;
	NSMutableArray* _hiddenContainersWithError;
	NSOperationQueue* _opQueue;
	BOOL _shouldKeepDataLocal;

}

@property (retain) BRGlobalProgressProxy * progress;                //@synthesize progress=_progress - In the implementation block
@property (copy) id uploadAllFilesCompletionBlock;                  //@synthesize uploadAllFilesCompletionBlock=_uploadAllFilesCompletionBlock - In the implementation block
@property (assign) BOOL shouldKeepDataLocal;                        //@synthesize shouldKeepDataLocal=_shouldKeepDataLocal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)cancel;
-(void)main;
-(BRGlobalProgressProxy *)progress;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(BOOL)shouldKeepDataLocal;
-(void)evictAllFilesInGroup:(id)arg1 ;
-(id)uploadAllFilesCompletionBlock;
-(void)setUploadAllFilesCompletionBlock:(id)arg1 ;
-(void)setShouldKeepDataLocal:(BOOL)arg1 ;
@end

