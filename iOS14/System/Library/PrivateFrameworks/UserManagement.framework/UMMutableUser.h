/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <UserManagement/UMUser.h>

@class NSString, NSURL, NSDate, NSArray, NSError;

@interface UMMutableUser : UMUser

@property (assign,nonatomic) unsigned uid; 
@property (assign,nonatomic) unsigned gid; 
@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSURL * homeDirectoryURL; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSURL * photoURL; 
@property (nonatomic,copy) NSString * userAuxiliaryString; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * lastLoginDate; 
@property (nonatomic,copy) NSDate * lastRemoteAuthDate; 
@property (assign,nonatomic) unsigned long long passcodeType; 
@property (assign,nonatomic) BOOL isLoginUser; 
@property (assign,nonatomic) BOOL isAuditor; 
@property (assign,nonatomic) BOOL isDisabled; 
@property (assign,nonatomic) BOOL isTransientUser; 
@property (assign,nonatomic) unsigned long long passcodeLockGracePeriod; 
@property (nonatomic,copy) NSArray * languages; 
@property (assign,nonatomic) BOOL hasManagedCredentials; 
@property (assign,nonatomic) unsigned long long dataQuota; 
@property (assign,nonatomic) unsigned long long dataUsed; 
@property (assign,nonatomic) BOOL hasDataToSync; 
@property (nonatomic,retain) NSError * errorCausingLogout; 
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
@end

