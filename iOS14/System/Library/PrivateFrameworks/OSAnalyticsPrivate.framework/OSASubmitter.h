/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@class NSData, NSDictionary, NSError, NSArray, NSString, NSURL;

@interface OSASubmitter : NSObject {

	long long _responseCode;
	NSData* _responseData;
	NSDictionary* _responseHeaders;
	NSError* _responseError;
	BOOL _dryRun;
	unsigned _jobCount;
	BOOL _allowUnsignedBlobs;
	NSArray* _internalWhitelist;
	NSString* _connectionType;
	NSDictionary* _launchInfo;

}

@property (assign) BOOL allowUnsignedBlobs;                //@synthesize allowUnsignedBlobs=_allowUnsignedBlobs - In the implementation block
@property (copy) NSArray * internalWhitelist;              //@synthesize internalWhitelist=_internalWhitelist - In the implementation block
@property (copy) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (readonly) NSURL * submissionURL; 
@property (copy) NSDictionary * launchInfo;                //@synthesize launchInfo=_launchInfo - In the implementation block
+(id)extractAuthenticatedBlob:(id)arg1 error:(id*)arg2 ;
-(void)abort;
-(NSString *)connectionType;
-(id)init;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSDictionary *)launchInfo;
-(void)setLaunchInfo:(NSDictionary *)arg1 ;
-(id)locateLog:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)processJob:(id)arg1 forRouting:(id)arg2 including:(id)arg3 usingConfig:(id)arg4 taskings:(id)arg5 summarize:(id)arg6 ;
-(void)prefaceSubmission:(id)arg1 withData:(id)arg2 usingArchive:(id)arg3 andHeaders:(id)arg4 ;
-(void)postContent:(id)arg1 withHeaders:(id)arg2 ;
-(id)applyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4 ;
-(id)processSubmissionJobs:(id)arg1 usingConfig:(id)arg2 summarize:(id)arg3 ;
-(void)prepConfig:(id)arg1 ;
-(NSURL *)submissionURL;
-(BOOL)cheaterTaskingWithSets:(id)arg1 usingConfig:(id)arg2 resultsCallback:(/*^block*/id)arg3 ;
-(BOOL)submitLogsUsingPolicy:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(BOOL)allowUnsignedBlobs;
-(void)setAllowUnsignedBlobs:(BOOL)arg1 ;
-(NSArray *)internalWhitelist;
-(void)setInternalWhitelist:(NSArray *)arg1 ;
@end

