/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSURLSessionTask, NSURLRequest, NSMutableData, NSString;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _defaultSession;
	NSURLSessionTask* _dataTask;
	NSURLRequest* _request;
	NSMutableData* _rawData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
+(void)setShouldGenerateOfflineData:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)parseData:(id)arg1 ;
-(id)init;
-(BOOL)isLoading;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)loadRequest:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)didParseData;
-(id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2 ;
-(id)taskForRequest:(id)arg1 delegate:(id)arg2 ;
-(void)cancelAndInvalidate;
-(id)YQLLanguageCode;
-(id)YQLCountryCode;
-(void)failToParseWithData:(id)arg1 ;
-(void)failToParseWithDataSeriesDictionary:(id)arg1 ;
-(void)_createDefaultSession;
-(void)_loadDefaultSessionIfNeeded;
@end

