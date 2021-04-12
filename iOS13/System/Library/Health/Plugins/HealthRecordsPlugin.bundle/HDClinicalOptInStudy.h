/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HDClinicalOptInStudyDelegate;
@class NSOperationQueue, NSURLSession, HDProfile, NSMutableDictionary, NSString, HKHealthWrapMessageConfiguration;

@interface HDClinicalOptInStudy : NSObject <NSURLSessionDelegate> {

	NSOperationQueue* _operationQueue;
	NSURLSession* _session;
	os_unfair_lock_s _ivarLock;
	BOOL _readyForAnalyticsSubmission;
	unsigned short _port;
	id<HDClinicalOptInStudyDelegate> _delegate;
	HDProfile* _profile;
	long long _environment;
	NSMutableDictionary* _responses;
	NSMutableDictionary* _inputStreams;
	NSString* _authorizationKey;
	NSString* _certString;
	NSString* _channel;
	NSString* _scheme;
	NSString* _hostname;
	NSString* _studyID;
	NSString* _subjectID;
	NSString* _subjectToken;
	SecCertificateRef _certificate;
	HKHealthWrapMessageConfiguration* _healthWrapConfiguration;
	NSString* _healthCloudDirectoryPath;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) long long environment;                                                 //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSURLSession * session; 
@property (nonatomic,readonly) NSMutableDictionary * responses;                                       //@synthesize responses=_responses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * inputStreams;                                    //@synthesize inputStreams=_inputStreams - In the implementation block
@property (assign,nonatomic) BOOL readyForAnalyticsSubmission;                                        //@synthesize readyForAnalyticsSubmission=_readyForAnalyticsSubmission - In the implementation block
@property (nonatomic,readonly) NSString * authorizationKey;                                           //@synthesize authorizationKey=_authorizationKey - In the implementation block
@property (nonatomic,readonly) NSString * certString;                                                 //@synthesize certString=_certString - In the implementation block
@property (nonatomic,readonly) NSString * channel;                                                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                                     //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,readonly) NSString * hostname;                                                   //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * studyID;                                                    //@synthesize studyID=_studyID - In the implementation block
@property (nonatomic,retain) NSString * subjectID;                                                    //@synthesize subjectID=_subjectID - In the implementation block
@property (nonatomic,retain) NSString * subjectToken;                                                 //@synthesize subjectToken=_subjectToken - In the implementation block
@property (assign,nonatomic) SecCertificateRef certificate;                                           //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) HKHealthWrapMessageConfiguration * healthWrapConfiguration;              //@synthesize healthWrapConfiguration=_healthWrapConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * healthCloudDirectoryPath;                                   //@synthesize healthCloudDirectoryPath=_healthCloudDirectoryPath - In the implementation block
@property (assign,nonatomic,__weak) id<HDClinicalOptInStudyDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<HDClinicalOptInStudyDelegate>)delegate;
-(void)setDelegate:(id<HDClinicalOptInStudyDelegate>)arg1 ;
-(NSString *)scheme;
-(unsigned short)port;
-(long long)environment;
-(SecCertificateRef)certificate;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(HDProfile *)profile;
-(NSString *)hostname;
-(NSString *)channel;
-(id)_uploadURL;
-(NSMutableDictionary *)responses;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(id)_keyValueDomain;
-(NSString *)subjectToken;
-(void)setSubjectToken:(NSString *)arg1 ;
-(NSMutableDictionary *)inputStreams;
-(NSString *)subjectID;
-(void)setSubjectID:(NSString *)arg1 ;
-(BOOL)submitJSONAnalyticsData:(id)arg1 error:(id*)arg2 ;
-(id)initWithProfile:(id)arg1 environment:(long long)arg2 ;
-(BOOL)triggerOptInAnalyticsDataUploadToHealthCloudWithError:(id*)arg1 ;
-(id)currentSubjectID;
-(void)_lock_enableDataCollectionIfNecessary;
-(void)enableDataCollection;
-(BOOL)_submitAnalyticsData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_uploadSubmittedAnalyticsDataWithError:(id*)arg1 ;
-(NSString *)healthCloudDirectoryPath;
-(BOOL)_removeDirectory:(id)arg1 error:(id*)arg2 ;
-(void)_registerDevice;
-(BOOL)_lock_loadCertificateWithError:(id*)arg1 ;
-(BOOL)_lock_loadHealthWrapConfigurationWithError:(id*)arg1 ;
-(id)_registrationURL;
-(NSString *)authorizationKey;
-(NSString *)studyID;
-(id)_healthCloudUploadDirectoryPath;
-(BOOL)_createDirectory:(id)arg1 error:(id*)arg2 ;
-(HKHealthWrapMessageConfiguration *)healthWrapConfiguration;
-(BOOL)cleanWithError:(id*)arg1 ;
-(id)_subjectIDKey;
-(id)_subjectTokenKey;
-(BOOL)readyForAnalyticsSubmission;
-(void)setReadyForAnalyticsSubmission:(BOOL)arg1 ;
-(NSString *)certString;
-(void)setHealthWrapConfiguration:(HKHealthWrapMessageConfiguration *)arg1 ;
@end

