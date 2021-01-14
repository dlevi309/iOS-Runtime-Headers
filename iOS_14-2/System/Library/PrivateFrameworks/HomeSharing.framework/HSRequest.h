/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@class NSDictionary, NSString, NSData;

@interface HSRequest : NSObject {

	NSDictionary* _arguments;
	BOOL _concurrent;
	BOOL _acceptsGzipEncoding;
	NSString* _action;
	long long _method;
	NSData* _bodyData;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL acceptsGzipEncoding;                           //@synthesize acceptsGzipEncoding=_acceptsGzipEncoding - In the implementation block
+(id)request;
-(long long)method;
-(id)initWithAction:(id)arg1 ;
-(NSString *)action;
-(void)setBodyData:(NSData *)arg1 ;
-(double)timeoutInterval;
-(id)description;
-(void)setMethod:(long long)arg1 ;
-(NSData *)bodyData;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(BOOL)isConcurrent;
-(BOOL)acceptsGzipEncoding;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)setAcceptsGzipEncoding:(BOOL)arg1 ;
@end

