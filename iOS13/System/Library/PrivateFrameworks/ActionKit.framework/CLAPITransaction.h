/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(long long)requestType;
-(id)internalContext;
-(void)setInternalContext:(id)arg1 ;
-(void)setRequestType:(long long)arg1 ;
@end

