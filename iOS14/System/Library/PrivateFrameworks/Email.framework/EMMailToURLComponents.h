/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class NSArray, NSString;

@interface EMMailToURLComponents : NSObject {

	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;

}

@property (nonatomic,readonly) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,readonly) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                      //@synthesize body=_body - In the implementation block
+(id)componentsWithURL:(id)arg1 ;
-(NSString *)subject;
-(NSString *)body;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)_decomposeURL:(id)arg1 ;
@end

