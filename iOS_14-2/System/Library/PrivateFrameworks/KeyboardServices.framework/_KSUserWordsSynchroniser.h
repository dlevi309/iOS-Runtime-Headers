/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, _KSCloudKitManager, _KSControlFileController, _KSSystemTask, NSArray, _KSRequestThrottle;

@interface _KSUserWordsSynchroniser : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	_KSCloudKitManager* _cloudKitManager;
	_KSControlFileController* _controlFile;
	_KSSystemTask* _pushTask;
	BOOL _taskRun;
	NSArray* _languagesIfOffline;
	BOOL _attemptingConnection;
	BOOL _retryPending;
	BOOL _needRetry;
	_KSRequestThrottle* _identityThrottle;

}

@property (nonatomic,retain) NSArray * requiredLanguages; 
+(id)sharedInstance;
+(Class)infoClass;
+(id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2 ;
+(id)generateKeyWithSize:(unsigned long long)arg1 ;
-(void)disable;
-(id)filenameForLanguage:(id)arg1 ;
-(id)containerID;
-(id)init;
-(void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3 ;
-(void)accountDidChange:(id)arg1 ;
-(id)generateRecordListForLanguages:(id)arg1 ;
-(void)setRequiredLanguages:(NSArray *)arg1 ;
-(void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)requiredLanguages;
-(void)deleteZoneWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkConfiguration;
-(BOOL)checkErrors:(id)arg1 ;
-(void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)identitiesDidChange:(id)arg1 ;
-(void)modifyInformationWithOperations:(/*^block*/id)arg1 ;
-(void)saveKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)firstTimeDownloadWithKey:(id)arg1 ;
-(void)loadKeyWithCompletion:(/*^block*/id)arg1 ;
-(id)recordIDForLanguage:(id)arg1 withKey:(id)arg2 ;
-(void)checkProgress:(int)arg1 withInfo:(id)arg2 ;
-(void)deltaDownloadForLanguages:(id)arg1 ;
-(void)keyboardUsed;
-(id)information;
-(id)initForTestingWithManager:(id)arg1 enablePushing:(BOOL)arg2 ;
-(void)dumpAllRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

