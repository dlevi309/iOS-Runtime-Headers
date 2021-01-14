/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<EDReceivingAccount>)account;
-(NSString *)subject;
-(NSString *)body;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)address;
-(unsigned long long)hash;
-(void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(EMListUnsubscribeCommandMessageHeaders *)originalMessageHeaders;
-(BOOL)isEqual:(id)arg1 ;
@end

