/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSInputStream, NSMutableData, REHTTPConnection, NSString, NSURL, NSDictionary, NSData;

@interface REHTTPRequest : NSObject {

	CFHTTPServerRequestRef _request;
	NSInputStream* _stream;
	NSMutableData* _bodyData;
	REHTTPConnection* _connection;
	NSString* _method;
	NSURL* _url;
	NSDictionary* _headerFields;

}

@property (nonatomic,readonly) CFHTTPServerRequestRef request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSInputStream * stream; 
@property (nonatomic,readonly) REHTTPConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSData * bodyData; 
-(NSInputStream *)stream;
-(NSString *)method;
-(NSURL *)url;
-(CFHTTPServerRequestRef)request;
-(NSDictionary *)headerFields;
-(REHTTPConnection *)connection;
-(void)appendData:(id)arg1 ;
-(NSData *)bodyData;
-(void)dealloc;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithConnect:(id)arg1 request:(CFHTTPServerRequestRef)arg2 ;
@end

