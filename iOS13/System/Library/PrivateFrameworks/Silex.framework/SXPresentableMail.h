/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString;

@interface SXPresentableMail : NSObject {

	NSString* _recipient;
	NSString* _subject;

}

@property (nonatomic,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                //@synthesize subject=_subject - In the implementation block
-(NSString *)subject;
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 subject:(id)arg2 ;
@end

