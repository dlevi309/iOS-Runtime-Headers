/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 ;
@end

