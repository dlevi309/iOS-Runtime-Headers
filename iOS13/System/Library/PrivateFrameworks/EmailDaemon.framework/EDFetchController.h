/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDAccountsProvider;
@class NSString;

@interface EDFetchController : NSObject <EFLoggable> {

	id<EDAccountsProvider> _accountsProvider;

}

@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id<EDAccountsProvider>)accountsProvider;
-(id)initWithAccountsProvider:(id)arg1 ;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
@end

