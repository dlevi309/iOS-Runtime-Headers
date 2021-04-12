/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@protocol CADACAccountsProvider;
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	id<CADACAccountsProvider> _accountsProvider;

}

@property (nonatomic,readonly) id<CADACAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
-(void)reset;
-(id<CADACAccountsProvider>)accountsProvider;
-(id)initWithAccountsProvider:(id)arg1 ;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
@end

