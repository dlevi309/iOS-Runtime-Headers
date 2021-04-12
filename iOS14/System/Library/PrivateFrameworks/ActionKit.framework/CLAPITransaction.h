/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, NSString;

@interface CLAPITransaction : NSObject {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _receivedData;
	NSHTTPURLResponse* _response;
	long long _requestType;
	NSString* _identifier;
	id _userInfo;
	id _internalContext;

}

@property (nonatomic,retain) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
@property (assign,nonatomic) long long requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id internalContext;                        //@synthesize internalContext=_internalContext - In the implementation block
+(id)transaction;
-(void)setUserInfo:(id)arg1 ;
-(NSMutableData *)receivedData;
-(void)setRequestType:(long long)arg1 ;
-(id)userInfo;
-(id)init;
-(long long)requestType;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(NSURLRequest *)request;
-(NSURLConnection *)connection;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(id)internalContext;
-(void)setInternalContext:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)dealloc;
@end

