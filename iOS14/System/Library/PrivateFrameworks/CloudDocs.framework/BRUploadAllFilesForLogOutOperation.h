/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRGlobalProgressProxy *)progress;
-(id)init;
-(BOOL)shouldKeepDataLocal;
-(void)evictAllFilesInGroup:(id)arg1 ;
-(id)uploadAllFilesCompletionBlock;
-(void)setShouldKeepDataLocal:(BOOL)arg1 ;
-(void)setUploadAllFilesCompletionBlock:(id)arg1 ;
-(NSString *)description;
-(void)main;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

