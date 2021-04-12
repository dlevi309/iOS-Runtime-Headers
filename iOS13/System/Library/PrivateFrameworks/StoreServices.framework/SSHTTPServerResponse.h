/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(short)statusCode;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(void)setStatusCode:(short)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)initWithStatusCode:(short)arg1 ;
-(void)setBodyWithBag:(id)arg1 ;
-(id)bagFromBody;
-(CFHTTPMessageRef)copyHTTPMessage;
@end

