/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)httpInputStream;
-(NSString *)httpContentType;
-(long long)httpContentLength;
-(void)setHttpContentType:(NSString *)arg1 ;
@end

