/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSArray, NSDictionary, NSString, CNContactStore, CNContactFilter, CNContactFormatter;


@protocol CNContactDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactStore * store; 
@property (nonatomic,copy) CNContactFilter * filter; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
@optional
-(void)invalidate;
-(void)reset;
-(NSString *)displayName;
-(CNContactStore *)store;
-(void)setFilter:(id)arg1;
-(CNContactFilter *)filter;
-(void)reload;
-(BOOL)isLoading;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(id)arg1;
-(CNContactFilter *)effectiveFilter;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;

@required
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)contacts;
-(NSArray *)sections;
-(NSArray *)indexSections;
-(BOOL)canReload;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
-(id)indexPathForContact:(id)arg1;
-(NSDictionary *)contactMatchInfos;

@end

