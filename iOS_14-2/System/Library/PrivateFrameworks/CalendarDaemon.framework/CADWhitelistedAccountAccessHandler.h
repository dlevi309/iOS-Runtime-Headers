/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@protocol CADACAccountsProvider;
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	id<CADACAccountsProvider> _accountsProvider;

}

@property (nonatomic,readonly) id<CADACAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id<CADACAccountsProvider>)accountsProvider;
-(void)reset;
-(id)initWithAccountsProvider:(id)arg1 ;
@end

