/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)displayedAccounts;
-(NSArray *)orderedAccounts;
-(NSSet *)autofetchAccounts;
-(BOOL)isDisplayingMultipleAccounts;
-(NSArray *)mailAccounts;

@end

