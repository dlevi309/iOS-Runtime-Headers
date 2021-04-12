/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSDate *)date;
-(long long)statusCode;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)_dateFormatter;
-(void)setDate:(NSDate *)arg1 ;
-(CFHTTPServerResponseRef)response;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
-(id)headerValueForKey:(id)arg1 ;
@end

