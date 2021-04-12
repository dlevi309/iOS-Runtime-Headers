/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(long long)type;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSData *)data;
@end

