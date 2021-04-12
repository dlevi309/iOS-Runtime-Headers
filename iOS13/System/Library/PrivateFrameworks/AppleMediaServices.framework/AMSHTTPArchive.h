/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSData;

@interface AMSHTTPArchive : NSObject {

	BOOL _compressed;
	NSData* _backingJSONData;
	NSData* _JSONData;

}

@property (nonatomic,retain) NSData * backingJSONData;                         //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData;                              //@synthesize JSONData=_JSONData - In the implementation block
+(id)directory;
+(id)merge:(id)arg1 ;
+(id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(id)_createJSONObjectForEntries:(id)arg1 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_generateCommentsStringForMetrics:(id)arg1 ;
+(id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)_generateHeadersArrayForHTTPHeaders:(id)arg1 ;
+(id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(void)removeHTTPArchiveFilesOlderThanDate:(id)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(id)_initWithJSONObject:(id)arg1 ;
-(BOOL)isCompressed;
-(NSData *)backingJSONData;
-(id)initWithURLTaskInfo:(id)arg1 ;
-(BOOL)writeToDiskWithError:(id*)arg1 compressed:(BOOL)arg2 ;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(NSData *)JSONData;
@end

