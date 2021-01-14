/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL isGuestPersona; 
@property (assign,nonatomic) BOOL isDataSeparatedPersona; 
@property (assign,nonatomic) BOOL isDisabled; 
@property (nonatomic,copy) NSString * userPersonaUniqueString; 
@property (nonatomic,copy) NSString * userPersonaNickName; 
@property (assign,nonatomic) unsigned long long userPersonaType; 
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
@end

