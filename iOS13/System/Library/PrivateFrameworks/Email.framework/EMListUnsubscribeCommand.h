/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EDReceivingAccount;
@class NSString, EMListUnsubscribeCommandMessageHeaders;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding> {

	id<EDReceivingAccount> _account;
	NSString* _accountIdentifier;
	NSString* _address;
	NSString* _subject;
	NSString* _body;
	EMListUnsubscribeCommandMessageHeaders* _originalMessageHeaders;

}

@property (nonatomic,readonly) NSString * address;                                                           //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * subject;                                                           //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                                                              //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) id<EDReceivingAccount> account; 
@property (nonatomic,readonly) EMListUnsubscribeCommandMessageHeaders * originalMessageHeaders;              //@synthesize originalMessageHeaders=_originalMessageHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)accountFinderBlock;
+(void)setAccountFinderBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(id<EDReceivingAccount>)account;
-(NSString *)subject;
-(NSString *)body;
-(EMListUnsubscribeCommandMessageHeaders *)originalMessageHeaders;
-(void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 ;
@end

