/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSMutableArray, NSString, NSData, NSInputStream, NSOutputStream, NSMutableData;

@interface JXHTTPMultipartBody : NSObject <NSStreamDelegate, JXHTTPRequestBody> {

	unsigned long long _streamBufferLength;
	NSMutableArray* _partsArray;
	NSString* _boundaryString;
	NSData* _finalBoundaryData;
	NSString* _httpContentType;
	NSInputStream* _httpInputStream;
	NSOutputStream* _httpOutputStream;
	NSMutableData* _bodyDataBuffer;
	long long _httpContentLength;
	long long _bytesWritten;

}

@property (nonatomic,retain) NSMutableArray * partsArray;                        //@synthesize partsArray=_partsArray - In the implementation block
@property (nonatomic,retain) NSString * boundaryString;                          //@synthesize boundaryString=_boundaryString - In the implementation block
@property (nonatomic,retain) NSData * finalBoundaryData;                         //@synthesize finalBoundaryData=_finalBoundaryData - In the implementation block
@property (nonatomic,retain) NSString * httpContentType;                         //@synthesize httpContentType=_httpContentType - In the implementation block
@property (nonatomic,retain) NSInputStream * httpInputStream;                    //@synthesize httpInputStream=_httpInputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * httpOutputStream;                  //@synthesize httpOutputStream=_httpOutputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * bodyDataBuffer;                     //@synthesize bodyDataBuffer=_bodyDataBuffer - In the implementation block
@property (assign,nonatomic) long long httpContentLength;                        //@synthesize httpContentLength=_httpContentLength - In the implementation block
@property (assign,nonatomic) long long bytesWritten;                             //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (assign,nonatomic) unsigned long long streamBufferLength;              //@synthesize streamBufferLength=_streamBufferLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withDictionary:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(long long)bytesWritten;
-(id)init;
-(void)setBytesWritten:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(NSInputStream *)httpInputStream;
-(NSString *)httpContentType;
-(long long)httpContentLength;
-(void)httpOperationWillStart:(id)arg1 ;
-(void)httpOperationWillNeedNewBodyStream:(id)arg1 ;
-(void)httpOperationDidFinishLoading:(id)arg1 ;
-(void)httpOperationDidFail:(id)arg1 ;
-(void)setHttpContentType:(NSString *)arg1 ;
-(unsigned long long)loadMutableData:(id)arg1 withDataInRange:(NSRange)arg2 ;
-(void)recreateStreamsForOperation:(id)arg1 ;
-(void)scheduleOutputStreamOnThread:(id)arg1 ;
-(void)setPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5 ;
-(void)addPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5 ;
-(void)addString:(id)arg1 forKey:(id)arg2 ;
-(void)addData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 ;
-(void)setData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 ;
-(void)addFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 ;
-(void)setFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 ;
-(unsigned long long)streamBufferLength;
-(void)setStreamBufferLength:(unsigned long long)arg1 ;
-(NSMutableArray *)partsArray;
-(void)setPartsArray:(NSMutableArray *)arg1 ;
-(NSString *)boundaryString;
-(void)setBoundaryString:(NSString *)arg1 ;
-(NSData *)finalBoundaryData;
-(void)setFinalBoundaryData:(NSData *)arg1 ;
-(void)setHttpInputStream:(NSInputStream *)arg1 ;
-(NSOutputStream *)httpOutputStream;
-(void)setHttpOutputStream:(NSOutputStream *)arg1 ;
-(NSMutableData *)bodyDataBuffer;
-(void)setBodyDataBuffer:(NSMutableData *)arg1 ;
-(void)setHttpContentLength:(long long)arg1 ;
@end

