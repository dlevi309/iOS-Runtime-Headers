/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString, NSDate;

@interface RKConversationTurn : NSObject {

	NSString* _text;
	NSString* _senderId;
	NSDate* _timestamp;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) NSString * senderId;              //@synthesize senderId=_senderId - In the implementation block
@property (readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(NSDate *)timestamp;
-(NSString *)text;
-(id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
-(NSString *)senderId;
@end

