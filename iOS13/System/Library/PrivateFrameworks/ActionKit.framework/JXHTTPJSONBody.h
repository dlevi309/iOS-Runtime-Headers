/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody> {

	NSData* _requestData;

}

@property (nonatomic,retain) NSData * requestData;                  //@synthesize requestData=_requestData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withString:(id)arg1 ;
+(id)withData:(id)arg1 ;
+(id)withJSONObject:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
-(void)httpOperationDidFinishLoading:(id)arg1 ;
@end

