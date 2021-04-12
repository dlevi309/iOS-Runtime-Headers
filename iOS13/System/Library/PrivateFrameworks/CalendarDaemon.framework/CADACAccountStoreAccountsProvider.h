/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADACAccountsProvider.h>

@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accounts;
-(id)initWithAccountStore:(id)arg1 ;
-(ACAccountStore *)accountStore;
@end

