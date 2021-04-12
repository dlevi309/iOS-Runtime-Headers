/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * protocol;                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * host;                     //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)host;
-(NSString *)protocol;
-(NSURLRequest *)request;
-(id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3 ;
@end

