/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSArray;

@interface RKConversation : NSObject {

	unsigned long long _type;
	NSArray* _messages;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(unsigned long long)type;
-(NSArray *)messages;
-(id)initWithString:(unsigned long long)arg1 messages:(id)arg2 ;
@end

