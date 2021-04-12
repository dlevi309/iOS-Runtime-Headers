/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/ENTTransport.h>

@class NSURL, NSMutableData, NSData, NSString;

@interface ENTHTTPClient : NSObject <ENTTransport> {

	int _responseDataOffset;
	int _timeout;
	NSURL* _url;
	NSMutableData* _requestData;
	NSData* _responseData;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSMutableData * requestData;              //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NSData * responseData;                    //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) int responseDataOffset;                   //@synthesize responseDataOffset=_responseDataOffset - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                     //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) int timeout;                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(NSMutableData *)requestData;
-(id)initWithURL:(id)arg1 ;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(void)setResponseData:(NSData *)arg1 ;
-(NSURL *)url;
-(NSData *)responseData;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)newRequest;
-(void)setRequestData:(NSMutableData *)arg1 ;
-(void)cancel;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3 ;
-(int)responseDataOffset;
-(void)setResponseDataOffset:(int)arg1 ;
@end

