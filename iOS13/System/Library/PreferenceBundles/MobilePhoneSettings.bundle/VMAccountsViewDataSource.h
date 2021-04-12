/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <libobjc.A.dylib/VMAccountsViewDataSource.h>

@class NSArray, NSString;

@interface VMAccountsViewDataSource : NSObject <VMAccountsViewDataSource> {

	NSArray* _accounts;

}

@property (nonatomic,copy) NSArray * accounts;                      //@synthesize accounts=_accounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfRowsForAccountsView:(id)arg1 ;
-(id)titleForAccountsView:(id)arg1 ;
-(id)initWithAccounts:(id)arg1 ;
@end

