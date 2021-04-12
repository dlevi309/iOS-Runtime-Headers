/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <CFNetwork/NSURLConnection.h>

@class NSURLRequest, NSHTTPURLResponse, NSMutableData, NSData;

@interface IKURLConnection : NSURLConnection {

	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSMutableData* _data;
	id _userInfo;
	int _type;
	id _context;

}

@property (nonatomic,readonly) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int type;                                  //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)_setContext:(id)arg1 ;
-(int)type;
-(id)userInfo;
-(NSData *)data;
-(id)_context;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(void)_setType:(int)arg1 ;
-(void)_setResponse:(id)arg1 ;
-(void)_appendData:(id)arg1 ;
-(void)_setUserInfo:(id)arg1 ;
@end

