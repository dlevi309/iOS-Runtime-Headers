/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, HTSHTTPMessageRequest, NSMutableData;

@interface HTSHTTPMessageResponse : HTSHTTPMessage {

	int _statusCode;
	NSString* _statusDescription;
	NSString* _trackingDescription;
	HTSHTTPMessageRequest* _request;
	NSMutableData* _serializedData;
	double _sendTime;
	unsigned long long _written;

}

@property (nonatomic,retain) HTSHTTPMessageRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableData * serializedData;               //@synthesize serializedData=_serializedData - In the implementation block
@property (assign,nonatomic) unsigned long long written;                   //@synthesize written=_written - In the implementation block
@property (assign,nonatomic) double sendTime;                              //@synthesize sendTime=_sendTime - In the implementation block
@property (assign,nonatomic) int statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                   //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * trackingDescription;                 //@synthesize trackingDescription=_trackingDescription - In the implementation block
-(NSMutableData *)serializedData;
-(void)setRequest:(HTSHTTPMessageRequest *)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(HTSHTTPMessageRequest *)request;
-(void)setSerializedData:(NSMutableData *)arg1 ;
-(int)statusCode;
-(void)setStatusDescription:(NSString *)arg1 ;
-(NSString *)statusDescription;
-(void)dealloc;
-(void)setSendTime:(double)arg1 ;
-(double)sendTime;
-(CFHTTPMessageRef)copyMessage;
-(NSString *)trackingDescription;
-(void)setTrackingDescription:(NSString *)arg1 ;
-(unsigned long long)written;
-(void)setWritten:(unsigned long long)arg1 ;
@end

