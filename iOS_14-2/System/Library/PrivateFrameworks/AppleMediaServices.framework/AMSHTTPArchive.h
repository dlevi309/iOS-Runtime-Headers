/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSData, NSString;

@interface AMSHTTPArchive : NSObject {

	BOOL _compressed;
	NSData* _backingJSONData;
	NSData* _JSONData;
	NSString* _urlString;

}

@property (nonatomic,retain) NSData * backingJSONData;                         //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData;                              //@synthesize JSONData=_JSONData - In the implementation block
@property (nonatomic,retain) NSString * urlString;                             //@synthesize urlString=_urlString - In the implementation block
+(id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)merge:(id)arg1 ;
+(id)directory;
+(id)_generateHeadersArrayForHTTPHeaders:(id)arg1 ;
+(id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_generateCommentsStringForMetrics:(id)arg1 ;
+(id)_createJSONObjectForEntries:(id)arg1 ;
+(id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2 ;
+(void)removeHTTPArchiveFilesOlderThanDate:(id)arg1 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
-(NSString *)urlString;
-(BOOL)writeToDiskWithError:(id*)arg1 compressed:(BOOL)arg2 ;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(NSData *)JSONData;
-(void)setCompressed:(BOOL)arg1 ;
-(NSData *)backingJSONData;
-(void)logHARData;
-(BOOL)isCompressed;
-(id)initWithURLTaskInfo:(id)arg1 ;
-(id)initWithMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
-(id)initWithJSONObject:(id)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
@end

