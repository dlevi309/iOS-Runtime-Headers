/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

