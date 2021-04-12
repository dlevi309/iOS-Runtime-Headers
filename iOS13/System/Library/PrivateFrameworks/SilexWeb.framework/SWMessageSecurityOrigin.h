/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageSecurityOrigin.h>
@class NSString, NSURLRequest;


@protocol SWMessageSecurityOrigin <NSObject>
@property (nonatomic,readonly) NSString * protocol; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSURLRequest * request; 
@required
-(NSString *)host;
-(NSString *)protocol;
-(NSURLRequest *)request;

@end


@class NSString, NSURLRequest;

@interface SWMessageSecurityOrigin : NSObject <SWMessageSecurityOrigin> {

	NSString* _protocol;
	NSString* _host;
	NSURLRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * protocol;                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * host;                     //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
-(NSString *)host;
-(NSString *)protocol;
-(NSURLRequest *)request;
-(id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3 ;
@end

