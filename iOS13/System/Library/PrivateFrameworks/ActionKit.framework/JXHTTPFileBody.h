/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSString;

@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody> {

	NSString* _filePath;
	NSString* _httpContentType;

}

@property (nonatomic,copy) NSString * filePath;                     //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString * httpContentType;              //@synthesize httpContentType=_httpContentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withFilePath:(id)arg1 contentType:(id)arg2 ;
+(id)withFilePath:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)httpInputStream;
-(NSString *)httpContentType;
-(long long)httpContentLength;
-(id)initWithFilePath:(id)arg1 contentType:(id)arg2 ;
-(void)setHttpContentType:(NSString *)arg1 ;
@end

