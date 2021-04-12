/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString;

@interface SXPresentableMessage : NSObject {

	NSString* _recipient;
	NSString* _message;

}

@property (nonatomic,copy,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                //@synthesize message=_message - In the implementation block
-(NSString *)message;
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 message:(id)arg2 ;
@end

