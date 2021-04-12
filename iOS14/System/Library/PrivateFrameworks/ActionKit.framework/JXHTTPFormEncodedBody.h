/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)requestData;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
@end

