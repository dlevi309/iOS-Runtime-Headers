/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <libobjc.A.dylib/VMAccountsViewDataSource.h>

@protocol VMAccountsViewDataSource <NSObject>
@optional
-(id)titleForAccountsView:(id)arg1;

@required
-(unsigned long long)numberOfRowsForAccountsView:(id)arg1;
-(id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2;

@end


@class NSArray, NSString;

@interface VMAccountsViewDataSource : NSObject <VMAccountsViewDataSource> {

	NSArray* _accounts;

}

@property (nonatomic,copy) NSArray * accounts;                      //@synthesize accounts=_accounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id)init;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(id)initWithAccounts:(id)arg1 ;
-(id)titleForAccountsView:(id)arg1 ;
-(unsigned long long)numberOfRowsForAccountsView:(id)arg1 ;
-(id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2 ;
@end

