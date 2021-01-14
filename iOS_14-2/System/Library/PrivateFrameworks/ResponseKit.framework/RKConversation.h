/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSArray;

@interface RKConversation : NSObject {

	unsigned long long _type;
	NSArray* _messages;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(NSArray *)messages;
-(unsigned long long)type;
-(id)initWithString:(unsigned long long)arg1 messages:(id)arg2 ;
@end

