/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSSpecifier.h>

@class PSAccountEnumerator;

@interface PSAccountsLinkSpecifier : PSSpecifier {

	PSAccountEnumerator* _accountEnumerator;

}

@property (nonatomic,retain) PSAccountEnumerator * accountEnumerator;              //@synthesize accountEnumerator=_accountEnumerator - In the implementation block
-(id)_accountsCount:(id)arg1 ;
-(id)initWithDetailClass:(Class)arg1 ;
-(PSAccountEnumerator *)accountEnumerator;
-(void)setAccountEnumerator:(PSAccountEnumerator *)arg1 ;
@end

