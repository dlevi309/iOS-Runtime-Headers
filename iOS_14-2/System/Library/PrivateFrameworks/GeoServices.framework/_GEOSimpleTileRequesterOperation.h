/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue, OS_os_activity;
@class GEODataRequest, NSData, GEODataSessionTask, NSString, NSObject, GEODataSession, NSURL;

@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate> {

	GEODataRequest* _request;
	NSData* _data;
	GEODataSessionTask* _task;
	NSString* _responseEtag;
	GEOTileKey _key;
	NSString* _editionHeader;
	_GEOSimpleTileRequesterOperation* _baseTile;
	_GEOSimpleTileRequesterOperation* _localizationTile;
	id<GEOSimpleTileRequesterOperationDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_os_activity> _parentTileActivity;
	double _timeout;
	double _startTime;
	double _endTime;
	GEODataSession* _dataSession;
	unsigned long long _signpostID;
	int _attempts;
	int _checksumMethod;
	unsigned _tileEdition;
	AI _priority;
	BOOL _finished;
	BOOL _existingCachedDataCurrent;
	BOOL _shouldReportAnalytics;
	NSString* _requestingBundleId;
	double _tileLoaderCreateTime;
	BOOL _shouldDownloadToDisk;
	BOOL _isRunning;

}

@property (nonatomic,readonly) GEODataRequest * request;                                                       //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                                                    //@synthesize signpostID=_signpostID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;                                               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> parentTileActivity;                                     //@synthesize parentTileActivity=_parentTileActivity - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign) unsigned priority; 
@property (assign,nonatomic) BOOL shouldDownloadToDisk;                                                        //@synthesize shouldDownloadToDisk=_shouldDownloadToDisk - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAnalytics;                                                       //@synthesize shouldReportAnalytics=_shouldReportAnalytics - In the implementation block
@property (nonatomic,retain) NSString * requestingBundleId;                                                    //@synthesize requestingBundleId=_requestingBundleId - In the implementation block
@property (assign,nonatomic) double tileLoaderCreateTime;                                                      //@synthesize tileLoaderCreateTime=_tileLoaderCreateTime - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,retain) NSString * responseEtag;                                                          //@synthesize responseEtag=_responseEtag - In the implementation block
@property (nonatomic,retain) GEODataSessionTask * task;                                                        //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) BOOL responseIsCacheable; 
@property (nonatomic,retain) NSString * editionHeader;                                                         //@synthesize editionHeader=_editionHeader - In the implementation block
@property (nonatomic,retain) _GEOSimpleTileRequesterOperation * baseTile;                                      //@synthesize baseTile=_baseTile - In the implementation block
@property (nonatomic,retain) _GEOSimpleTileRequesterOperation * localizationTile;                              //@synthesize localizationTile=_localizationTile - In the implementation block
@property (nonatomic,retain) GEODataSession * dataSession;                                                     //@synthesize dataSession=_dataSession - In the implementation block
@property (nonatomic,readonly) long long responseSource; 
@property (assign,nonatomic) GEOTileKey key;                                                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned tileEdition;                                                             //@synthesize tileEdition=_tileEdition - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (nonatomic,readonly) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) int httpResponseStatusCode; 
@property (getter=isExistingCachedDataCurrent,nonatomic,readonly) BOOL existingCachedDataCurrent;              //@synthesize existingCachedDataCurrent=_existingCachedDataCurrent - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOSimpleTileRequesterOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)contentLength;
-(BOOL)finished;
-(void)setTileEdition:(unsigned)arg1 ;
-(NSURL *)downloadedFileURL;
-(GEODataSessionTask *)task;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(const GEOTileKey*)keyPtr;
-(id)init;
-(void)clearAllRelatedOperations;
-(double)elapsed;
-(id<GEOSimpleTileRequesterOperationDelegate>)delegate;
-(void)_recordAnalyticsWithError:(id)arg1 ;
-(void)start;
-(NSObject*<OS_os_activity>)activity;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setLocalizationTile:(_GEOSimpleTileRequesterOperation *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setTask:(GEODataSessionTask *)arg1 ;
-(NSString *)requestingBundleId;
-(int)httpResponseStatusCode;
-(GEODataRequest *)request;
-(void)setData:(NSData *)arg1 ;
-(void)setResponseEtag:(NSString *)arg1 ;
-(void)setRequestingBundleId:(NSString *)arg1 ;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(long long)responseSource;
-(NSObject*<OS_os_activity>)parentTileActivity;
-(NSString *)description;
-(void)setParentTileActivity:(NSObject*<OS_os_activity>)arg1 ;
-(unsigned)tileEdition;
-(NSData *)data;
-(void)setShouldDownloadToDisk:(BOOL)arg1 ;
-(GEODataSession *)dataSession;
-(NSString *)responseEtag;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(GEOTileKey)key;
-(NSURL *)URL;
-(BOOL)shouldReportAnalytics;
-(void)setTileLoaderCreateTime:(double)arg1 ;
-(BOOL)responseIsCacheable;
-(void)setDataSession:(GEODataSession *)arg1 ;
-(id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)setShouldReportAnalytics:(BOOL)arg1 ;
-(void)setBaseTile:(_GEOSimpleTileRequesterOperation *)arg1 ;
-(double)tileLoaderCreateTime;
-(BOOL)validateTileIntegrityForTask:(id)arg1 ;
-(BOOL)shouldDownloadToDisk;
-(void)taskFailed:(id)arg1 withError:(id)arg2 ;
-(BOOL)isExistingCachedDataCurrent;
-(NSString *)editionHeader;
-(void)cancel;
-(_GEOSimpleTileRequesterOperation *)baseTile;
-(_GEOSimpleTileRequesterOperation *)localizationTile;
-(unsigned)priority;
-(double)startTime;
-(void)setEditionHeader:(NSString *)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(void)setKey:(GEOTileKey)arg1 ;
@end

