/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <UserManagement/UMUserPersona.h>

@class NSString;

@interface UMUserMutablePersona : UMUserPersona

@property (assign,nonatomic) unsigned uid; 
@property (assign,nonatomic) unsigned gid; 
@property (assign,nonatomic) BOOL isEnterprisePersona; 
@property (assign,nonatomic) BOOL isPersonalPersona; 
@property (assign,nonatomic) BOOL isSystemPersona; 
@property (assign,nonatomic) BOOL isDefaultPersona; 
@property (assign,nonatomic) BOOL isDisabled; 
@property (nonatomic,copy) NSString * userPersonaUniqueString; 
@property (nonatomic,copy) NSString * userPersonaNickName; 
@property (assign,nonatomic) unsigned long long userPersonaType; 
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
@end

