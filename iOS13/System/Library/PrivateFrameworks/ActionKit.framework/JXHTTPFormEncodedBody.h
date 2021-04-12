/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSMutableDictionary, NSString;

@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withDictionary:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)requestData;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
@end

