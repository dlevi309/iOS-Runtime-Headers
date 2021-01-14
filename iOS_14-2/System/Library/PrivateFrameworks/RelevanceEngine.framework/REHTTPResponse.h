/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REHTTPRequest, NSDictionary, NSString, NSDate, NSData;

@interface REHTTPResponse : NSObject {

	REHTTPRequest* _request;
	CFHTTPMessageRef _message;
	long long _statusCode;

}

@property (nonatomic,readonly) long long statusCode;                          //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSData * body; 
-(id)_dateFormatter;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSString *)contentType;
-(void)setDate:(NSDate *)arg1 ;
-(NSDictionary *)headerFields;
-(long long)statusCode;
-(CFHTTPServerResponseRef)response;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSDate *)date;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(id)headerValueForKey:(id)arg1 ;
@end

