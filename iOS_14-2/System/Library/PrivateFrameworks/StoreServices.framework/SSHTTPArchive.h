/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject {

	BOOL _compressed;
	NSData* _backingJSONData;

}

@property (nonatomic,retain) NSData * backingJSONData;                 //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,nonatomic) BOOL compressed;                          //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData; 
@property (nonatomic,readonly) NSDictionary * JSONObject; 
@property (nonatomic,readonly) NSString * JSONString; 
+(id)merge:(id)arg1 ;
+(id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2 ;
+(id)_stringFromDate:(id)arg1 ;
+(id)_headersArrayForHTTPHeaders:(id)arg1 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)outputDirectoryForLogConfig:(id)arg1 ;
+(id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_creatorDictionary;
+(id)_localIPAddress;
+(id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(void)sendWriteAllLogsToDiskDecompressedNotification;
+(void)sendWriteAllLogsToDiskNotification;
+(id)_JSONObjectForEntries:(id)arg1 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)_generateCommentsForTaskMetrics:(id)arg1 ;
-(id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
-(BOOL)compressed;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(NSDictionary *)JSONObject;
-(BOOL)writeToDiskError:(id*)arg1 ;
-(BOOL)writeToDiskWithLogConfig:(id)arg1 compressed:(BOOL)arg2 error:(id*)arg3 ;
-(id)description;
-(NSData *)JSONData;
-(void)setCompressed:(BOOL)arg1 ;
-(NSData *)backingJSONData;
-(NSString *)JSONString;
-(id)initWithJSONObject:(id)arg1 ;
@end

