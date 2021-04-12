/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFAccountsProvider.h>
#import <libobjc.A.dylib/EDAccountsProvider.h>

@class NSArray, NSSet, NSString;

@interface MFFakeAccountsProvider : NSObject <MFAccountsProvider, EDAccountsProvider> {

	NSArray* _mailAccounts;
	NSArray* _orderedAccounts;
	NSSet* _displayedAccounts;
	NSSet* _autofetchAccounts;

}

@property (nonatomic,copy) NSArray * mailAccounts;                                                               //@synthesize mailAccounts=_mailAccounts - In the implementation block
@property (nonatomic,copy) NSArray * orderedAccounts;                                                            //@synthesize orderedAccounts=_orderedAccounts - In the implementation block
@property (nonatomic,copy) NSSet * displayedAccounts;                                                            //@synthesize displayedAccounts=_displayedAccounts - In the implementation block
@property (nonatomic,copy) NSSet * autofetchAccounts;                                                            //@synthesize autofetchAccounts=_autofetchAccounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDisplayingMultipleAccounts,nonatomic,readonly) BOOL displayingMultipleAccounts; 
@property (nonatomic,copy,readonly) NSArray * receivingAddresses; 
-(NSArray *)mailAccounts;
-(void)setMailAccounts:(NSArray *)arg1 ;
-(NSSet *)displayedAccounts;
-(NSArray *)orderedAccounts;
-(NSSet *)autofetchAccounts;
-(BOOL)isDisplayingMultipleAccounts;
-(NSArray *)receivingAddresses;
-(void)setOrderedAccounts:(NSArray *)arg1 ;
-(void)setDisplayedAccounts:(NSSet *)arg1 ;
-(void)setAutofetchAccounts:(NSSet *)arg1 ;
@end

