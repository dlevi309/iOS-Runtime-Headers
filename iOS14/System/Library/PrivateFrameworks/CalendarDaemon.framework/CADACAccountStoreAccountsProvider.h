/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADACAccountsProvider.h>

@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)accounts;
-(ACAccountStore *)accountStore;
-(id)initWithAccountStore:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 ;
@end

