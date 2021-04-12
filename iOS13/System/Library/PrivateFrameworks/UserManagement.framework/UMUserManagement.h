/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

@class UMUser;


@protocol UMUserManagement <NSObject>
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,copy,readonly) UMUser * loginUser; 
@property (nonatomic,readonly) BOOL isLoginSession; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@property (nonatomic,readonly) unsigned long long userQuotaSize; 
@required
-(BOOL)isMultiUser;
-(UMUser *)currentUser;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)maxNumberOfUsers;
-(unsigned long long)userQuotaSize;
-(UMUser *)loginUser;
-(BOOL)isLoginSession;
-(BOOL)canAccessUserProperties;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserListUpdateObserver:(id)arg1;

@end

