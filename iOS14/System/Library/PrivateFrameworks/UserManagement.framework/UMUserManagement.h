/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(UMUser *)loginUser;
-(UMUser *)currentUser;
-(BOOL)canAccessUserProperties;
-(unsigned long long)maxNumberOfUsers;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isMultiUser;
-(void)registerUserListUpdateObserver:(id)arg1;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(unsigned long long)userQuotaSize;
-(BOOL)isLoginSession;

@end

