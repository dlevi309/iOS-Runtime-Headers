/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

