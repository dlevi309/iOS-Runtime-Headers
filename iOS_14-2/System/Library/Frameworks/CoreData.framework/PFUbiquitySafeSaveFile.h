/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_semaphore;
@class PFUbiquityLocation, NSString, NSError, NSObject;

@interface PFUbiquitySafeSaveFile : NSObject {

	PFUbiquityLocation* _permanentLocation;
	PFUbiquityLocation* _safeSaveLocation;
	PFUbiquityLocation* _currentLocation;
	NSString* _localPeerID;
	BOOL _continueCheckingDownload;
	BOOL _downloadSuccess;
	NSError* _downloadError;
	BOOL _continueCheckingUpload;
	BOOL _safeSaveSuccess;
	BOOL _moveAfterSave;
	NSError* _safeSaveError;
	NSObject*<OS_dispatch_semaphore> _safeSaveSemaphore;
	BOOL _isRegistered;

}

@property (nonatomic,readonly) PFUbiquityLocation * permanentLocation;              //@synthesize permanentLocation=_permanentLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * safeSaveLocation;               //@synthesize safeSaveLocation=_safeSaveLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSError * safeSaveError;                             //@synthesize safeSaveError=_safeSaveError - In the implementation block
@property (nonatomic,readonly) BOOL isRegistered;                                   //@synthesize isRegistered=_isRegistered - In the implementation block
@property (nonatomic,readonly) BOOL continueCheckingUpload;                         //@synthesize continueCheckingUpload=_continueCheckingUpload - In the implementation block
@property (nonatomic,readonly) BOOL safeSaveSuccess;                                //@synthesize safeSaveSuccess=_safeSaveSuccess - In the implementation block
@property (nonatomic,readonly) BOOL moveAfterSave;                                  //@synthesize moveAfterSave=_moveAfterSave - In the implementation block
@property (nonatomic,readonly) BOOL existsAtSafeSaveLocation; 
@property (nonatomic,readonly) BOOL existsAtPermanentLocation; 
@property (nonatomic,readonly) BOOL existsInCloud; 
@property (nonatomic,readonly) BOOL downloadSuccess;                                //@synthesize downloadSuccess=_downloadSuccess - In the implementation block
@property (nonatomic,readonly) BOOL continueCheckingDownload;                       //@synthesize continueCheckingDownload=_continueCheckingDownload - In the implementation block
@property (nonatomic,readonly) NSError * downloadError;                             //@synthesize downloadError=_downloadError - In the implementation block
-(BOOL)isRegistered;
-(PFUbiquityLocation *)currentLocation;
-(id)init;
-(void)setCurrentLocation:(PFUbiquityLocation *)arg1 ;
-(BOOL)writeFile:(id*)arg1 ;
-(BOOL)removeFile:(id*)arg1 ;
-(BOOL)loadFile:(id*)arg1 ;
-(NSString *)localPeerID;
-(BOOL)continueCheckingDownload;
-(BOOL)continueCheckingUpload;
-(void)checkFileDownload;
-(void)checkSafeSaveFileUpload;
-(PFUbiquityLocation *)permanentLocation;
-(PFUbiquityLocation *)safeSaveLocation;
-(id)description;
-(BOOL)existsInCloud;
-(id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3 ;
-(BOOL)downloadLatestVersion:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)moveToPermanentLocation:(id*)arg1 ;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)safeSaveFile:(BOOL)arg1 moveToPermanentLocation:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)existsAtSafeSaveLocation;
-(BOOL)isFileUploaded:(id*)arg1 ;
-(BOOL)waitForFileToUpload:(id*)arg1 ;
-(BOOL)existsAtPermanentLocation;
-(BOOL)removeFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFileDownloaded:(id*)arg1 ;
-(BOOL)waitForFileToDownload:(id*)arg1 ;
-(void)checkSafeSaveFileUploadAsync;
-(void)setSafeSaveSuccess:(BOOL)arg1 ;
-(void)safeSaveFinishedUpload;
-(void)setSafeSaveError:(NSError *)arg1 ;
-(void)setDownloadSuccess:(BOOL)arg1 ;
-(void)downloadFinished;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)safeSaveError;
-(BOOL)safeSaveSuccess;
-(BOOL)moveAfterSave;
-(BOOL)downloadSuccess;
-(NSError *)downloadError;
-(void)dealloc;
@end

