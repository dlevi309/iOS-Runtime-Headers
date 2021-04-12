/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFDownloadFileDelegate.h>
#import <libobjc.A.dylib/_WKDownloadDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressStateSource.h>

@protocol _SFDownloadDelegate, _SFDownloadPlaceholderImporter;
@class _WKDownload, WBSFluidProgressState, NSTimer, WKWebView, NSData, SFDownloadFile, NSString, NSURLRequest, NSURL, _WKUserInitiatedAction, NSURLResponse, NSUUID, NSDate, WBSFluidProgressController, _SFQuickLookDocument, NSDictionary;

@interface _SFDownload : NSObject <SFDownloadFileDelegate, _WKDownloadDelegate, WBSFluidProgressStateSource> {

	_WKDownload* _download;
	BOOL _wasCanceled;
	WBSFluidProgressState* _fluidProgressState;
	double _timeLastProgressNotificationWasSent;
	long long _cachedFileType;
	NSTimer* _reportUpdatedProgressTimer;
	WKWebView* _originatingWebView;
	NSData* _resumeData;
	SFDownloadFile* _placeholderFile;
	SFDownloadFile* _completedFile;
	NSString* _suggestedFilename;
	NSURLRequest* _request;
	BOOL _explicitlySaved;
	BOOL _suppressesPrompt;
	NSURL* _sourceURL;
	NSString* _fileDownloadPath;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSString* _uti;
	NSString* _mimeType;
	NSURLResponse* _response;
	NSUUID* _identifier;
	long long _bytesExpected;
	unsigned long long _bytesLoaded;
	long long _state;
	NSDate* _dateAdded;
	NSDate* _dateFinished;
	WBSFluidProgressController* _fluidProgressController;
	id<_SFDownloadDelegate> _delegate;
	id<_SFDownloadPlaceholderImporter> _placeholderImporter;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,retain) _SFQuickLookDocument * quickLookDocument;                                   //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                                                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSString * fileDownloadPath;                                              //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
@property (nonatomic,readonly) long long fileType; 
@property (nonatomic,readonly) _WKUserInitiatedAction * userInitiatedAction;                             //@synthesize userInitiatedAction=_userInitiatedAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * uti;                                                      //@synthesize uti=_uti - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;                                                 //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSURLResponse * response;                                                 //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _WKDownload * wkDownload; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * filenameWithoutExtension; 
@property (nonatomic,readonly) NSURL * completedFileURL; 
@property (nonatomic,readonly) long long dataOwner; 
@property (assign,nonatomic) BOOL explicitlySaved;                                                       //@synthesize explicitlySaved=_explicitlySaved - In the implementation block
@property (assign,nonatomic) BOOL suppressesPrompt;                                                      //@synthesize suppressesPrompt=_suppressesPrompt - In the implementation block
@property (nonatomic,readonly) long long bytesExpected;                                                  //@synthesize bytesExpected=_bytesExpected - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesLoaded;                                           //@synthesize bytesLoaded=_bytesLoaded - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
@property (nonatomic,readonly) NSDate * dateAdded;                                                       //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) NSDate * dateFinished;                                                    //@synthesize dateFinished=_dateFinished - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) BOOL canResume; 
@property (nonatomic,readonly) BOOL canReveal; 
@property (assign,nonatomic,__weak) WBSFluidProgressController * fluidProgressController;                //@synthesize fluidProgressController=_fluidProgressController - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDownloadDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDownloadPlaceholderImporter> placeholderImporter;              //@synthesize placeholderImporter=_placeholderImporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)provisionalDownloadWithMIMEType:(id)arg1 request:(id)arg2 response:(id)arg3 filename:(id)arg4 uti:(id)arg5 userInitiatedAction:(id)arg6 ;
+(id)downloadDestinationPathWithFilename:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<_SFDownloadDelegate>)delegate;
-(void)setDelegate:(id<_SFDownloadDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)cancel;
-(long long)fileType;
-(NSDictionary *)dictionaryRepresentation;
-(double)progress;
-(long long)state;
-(NSString *)filename;
-(NSURLResponse *)response;
-(NSString *)uti;
-(NSString *)mimeType;
-(long long)dataOwner;
-(BOOL)removeFromDisk;
-(NSURL *)sourceURL;
-(unsigned long long)bytesLoaded;
-(double)estimatedProgress;
-(void)_downloadDidStart:(id)arg1 ;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2 ;
-(void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_downloadDidFinish:(id)arg1 ;
-(void)_download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_downloadDidCancel:(id)arg1 ;
-(void)_downloadProcessDidCrash:(id)arg1 ;
-(NSDate *)dateAdded;
-(void)downloadFileContentsDidChange:(id)arg1 ;
-(void)downloadFileWillBeDeleted:(id)arg1 ;
-(void)downloadFileDidChangeURL:(id)arg1 ;
-(_SFQuickLookDocument *)quickLookDocument;
-(void)setExplicitlySaved:(BOOL)arg1 ;
-(void)setQuickLookDocument:(_SFQuickLookDocument *)arg1 ;
-(void)setFluidProgressController:(WBSFluidProgressController *)arg1 ;
-(id)expectedOrCurrentURL;
-(_WKUserInitiatedAction *)userInitiatedAction;
-(NSString *)fileDownloadPath;
-(BOOL)createFluidProgressState;
-(void)clearFluidProgressState;
-(id)progressState;
-(BOOL)hasFailedURL;
-(void)setPlaceholderImporter:(id<_SFDownloadPlaceholderImporter>)arg1 ;
-(NSURL *)completedFileURL;
-(id)initWithDictionaryRepresentation:(id)arg1 didUpdateRepresentation:(BOOL*)arg2 ;
-(void)removeDataAndPlaceholderFromDisk;
-(NSDate *)dateFinished;
-(BOOL)explicitlySaved;
-(long long)bytesExpected;
-(BOOL)canReveal;
-(_WKDownload *)wkDownload;
-(void)_reportUpdatedProgressTimerFired:(id)arg1 ;
-(void)_reportUpdatedProgressNow;
-(void)_cancelReportUpdatedProgressTimer;
-(id)completedFileURL:(BOOL*)arg1 ;
-(id)_createResumeData;
-(void)_validateSandboxAccessToURL:(id)arg1 ;
-(void)_didImportPlaceholderAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDelegateOfFinishedDownload;
-(void)_didImportFileAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WBSFluidProgressController *)fluidProgressController;
-(void)_didUpdateBytesLoaded;
-(void)_reportUpdatedProgressSoon;
-(void)_continueAfterDownloadConfirmation:(BOOL)arg1 destinationCompletionHandler:(/*^block*/id)arg2 ;
-(void)_continueAfterDecidingFileDownloadPath:(/*^block*/id)arg1 ;
-(void)_importPlaceholderIfNeeded:(/*^block*/id)arg1 ;
-(void)_importCompleteDownloadIfNeeded;
-(BOOL)isIdle;
-(NSString *)filenameWithoutExtension;
-(BOOL)canResume;
-(void)resumeInProcessPool:(id)arg1 ;
-(void)reveal;
-(BOOL)suppressesPrompt;
-(void)setSuppressesPrompt:(BOOL)arg1 ;
-(id<_SFDownloadPlaceholderImporter>)placeholderImporter;
@end

