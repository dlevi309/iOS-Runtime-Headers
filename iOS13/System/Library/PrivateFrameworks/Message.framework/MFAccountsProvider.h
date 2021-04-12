/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSArray, NSSet;


@protocol MFAccountsProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * mailAccounts; 
@property (nonatomic,copy,readonly) NSArray * orderedAccounts; 
@property (nonatomic,copy,readonly) NSSet * displayedAccounts; 
@property (nonatomic,copy,readonly) NSSet * autofetchAccounts; 
@property (getter=isDisplayingMultipleAccounts,nonatomic,readonly) BOOL displayingMultipleAccounts; 
@required
-(NSArray *)mailAccounts;
-(NSSet *)displayedAccounts;
-(NSArray *)orderedAccounts;
-(NSSet *)autofetchAccounts;
-(BOOL)isDisplayingMultipleAccounts;

@end

