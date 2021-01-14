/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject {

	short _statusCode;
	NSData* _body;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSData * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) short statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(id)initWithStatusCode:(short)arg1 ;
-(void)setBodyWithBag:(id)arg1 ;
-(CFHTTPMessageRef)copyHTTPMessage;
-(void)setStatusCode:(short)arg1 ;
-(short)statusCode;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id)bagFromBody;
@end

