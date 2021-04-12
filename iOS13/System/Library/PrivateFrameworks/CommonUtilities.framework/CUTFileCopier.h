/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@protocol CUTFileCopierDelegate;
@class NSURL;

@interface CUTFileCopier : NSObject {

	BOOL _shouldCancel;
	BOOL _didErrorOccur;
	BOOL _inProgress;
	unsigned _operation;
	id<CUTFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	void* _BOMCopier;

}

@property (assign) void* _BOMCopier;                                //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) BOOL inProgress;                                 //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned operation;                              //@synthesize operation=_operation - In the implementation block
@property (__weak) id<CUTFileCopierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSURL * inputURL;                         //@synthesize inputURL=_inputURL - In the implementation block
@property (copy,readonly) NSURL * outputURL;                        //@synthesize outputURL=_outputURL - In the implementation block
@property (readonly) id identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL wasCancelled;                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) BOOL didErrorOccur;                  //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
-(void)dealloc;
-(id<CUTFileCopierDelegate>)delegate;
-(void)setDelegate:(id<CUTFileCopierDelegate>)arg1 ;
-(id)identifier;
-(void)cancel;
-(unsigned)operation;
-(void)setOperation:(unsigned)arg1 ;
-(void)start;
-(void)cleanup;
-(void)_fillOutputURLFromInputURL;
-(NSURL *)inputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(NSURL *)outputURL;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned)arg4 delegate:(id)arg5 ;
-(BOOL)wasCancelled;
-(BOOL)didErrorOccur;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void*)_BOMCopier;
-(void)set_BOMCopier:(void*)arg1 ;
@end

