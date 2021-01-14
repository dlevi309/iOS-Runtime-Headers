/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(id)userInfo;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(NSData *)data;
-(int)type;
-(void)_setResponse:(id)arg1 ;
-(void)_setType:(int)arg1 ;
-(id)_context;
-(void)_setContext:(id)arg1 ;
-(void)dealloc;
-(void)_appendData:(id)arg1 ;
-(void)_setUserInfo:(id)arg1 ;
@end

