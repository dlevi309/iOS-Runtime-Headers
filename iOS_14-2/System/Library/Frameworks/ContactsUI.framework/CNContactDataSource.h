/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFilter:(id)arg1;
-(void)setContactFormatter:(id)arg1;
-(CNContactFilter *)filter;
-(CNContactFormatter *)contactFormatter;
-(CNContactStore *)store;
-(BOOL)isLoading;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(void)reload;
-(CNContactFilter *)effectiveFilter;
-(void)reset;
-(void)invalidate;
-(NSString *)displayName;

@required
-(NSArray *)contacts;
-(id<CNContactDataSourceDelegate>)delegate;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)sections;
-(void)setDelegate:(id)arg1;
-(BOOL)canReload;
-(NSArray *)indexSections;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
-(id)indexPathForContact:(id)arg1;

@end

