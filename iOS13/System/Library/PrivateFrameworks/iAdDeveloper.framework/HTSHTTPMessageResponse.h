/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)statusCode;
-(void)setRequest:(HTSHTTPMessageRequest *)arg1 ;
-(HTSHTTPMessageRequest *)request;
-(void)setStatusCode:(int)arg1 ;
-(NSMutableData *)serializedData;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setSerializedData:(NSMutableData *)arg1 ;
-(void)setSendTime:(double)arg1 ;
-(double)sendTime;
-(CFHTTPMessageRef)copyMessage;
-(NSString *)trackingDescription;
-(void)setTrackingDescription:(NSString *)arg1 ;
-(unsigned long long)written;
-(void)setWritten:(unsigned long long)arg1 ;
@end

