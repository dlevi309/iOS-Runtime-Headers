/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSData, NSString;

@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody> {

	NSData* _data;
	NSString* _httpContentType;

}

@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * httpContentType;              //@synthesize httpContentType=_httpContentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withData:(id)arg1 ;
+(id)withData:(id)arg1 contentType:(id)arg2 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)httpInputStream;
-(NSString *)httpContentType;
-(long long)httpContentLength;
-(void)setHttpContentType:(NSString *)arg1 ;
@end

