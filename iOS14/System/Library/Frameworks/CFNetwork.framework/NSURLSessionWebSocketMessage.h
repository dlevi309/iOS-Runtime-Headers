/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSData, NSString;

@interface NSURLSessionWebSocketMessage : NSObject {

	id content;
	long long _type;

}

@property (readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * string; 
-(id)initWithString:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(long long)type;
-(NSString *)string;
@end

