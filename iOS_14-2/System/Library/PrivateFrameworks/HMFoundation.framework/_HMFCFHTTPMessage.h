/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSData;

@interface _HMFCFHTTPMessage : HMFObject {

	CFHTTPMessageRef _message;

}

@property (nonatomic,readonly) CFHTTPMessageRef message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,copy) NSData * body; 
+(id)dateFormatter;
+(id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3 ;
+(id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3 ;
-(void)setBody:(NSData *)arg1 ;
-(long long)contentLength;
-(CFHTTPMessageRef)message;
-(NSData *)body;
-(id)init;
-(id)contentType;
-(void)setDate:(id)arg1 ;
-(NSDictionary *)headerFields;
-(void)setContentLength:(long long)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)date;
-(void)dealloc;
-(id)initWithMessageRef:(CFHTTPMessageRef)arg1 ;
-(id)valueForHeaderField:(id)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
@end

