/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)requestData;
-(id)initWithData:(id)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
-(void)httpOperationDidFinishLoading:(id)arg1 ;
@end

