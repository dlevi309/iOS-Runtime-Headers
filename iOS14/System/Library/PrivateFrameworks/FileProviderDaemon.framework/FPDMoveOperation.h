/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDMoveReader, FPDMoveWriter, FPDActionOperationQueue, FPMoveInfo;

@interface FPDMoveOperation : FPDActionOperation {

	FPDMoveReader* _reader;
	FPDMoveWriter* _writer;
	FPDActionOperationQueue* _queue;

}

@property (nonatomic,readonly) FPMoveInfo * info; 
+(BOOL)_validateInfo:(id)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(void)main;
-(void)_t_unblockReader;
-(void)cancelRoot:(id)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3 ;
-(id)moveInfo;
-(void)sendPastUpdatesToClient:(id)arg1 ;
@end

