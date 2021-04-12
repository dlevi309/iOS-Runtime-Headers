/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet;

@interface DAAccountChangeInfo : NSObject <NSSecureCoding> {

	unsigned long long _changeType;
	NSString* _accountIdentifier;
	NSString* _accountTypeIdentifier;
	NSDictionary* _oldAccountProperties;
	NSString* _username;
	NSString* _password;
	NSString* _oldUsername;
	NSString* _oldPassword;
	NSSet* _modifiedDataClasses;
	NSString* _clientName;

}

@property (nonatomic,readonly) unsigned long long changeType;                         //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountTypeIdentifier;                 //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * oldAccountProperties;              //@synthesize oldAccountProperties=_oldAccountProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldUsername;                           //@synthesize oldUsername=_oldUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldPassword;                           //@synthesize oldPassword=_oldPassword - In the implementation block
@property (nonatomic,copy,readonly) NSSet * modifiedDataClasses;                      //@synthesize modifiedDataClasses=_modifiedDataClasses - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                            //@synthesize clientName=_clientName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_stringForChangeType:(unsigned long long)arg1 ;
-(unsigned long long)changeType;
-(NSString *)clientName;
-(NSString *)oldPassword;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)oldAccountProperties;
-(NSString *)oldUsername;
-(NSString *)password;
-(NSString *)username;
-(id)description;
-(id)initWithChangeType:(unsigned long long)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 oldAccountProperties:(id)arg4 username:(id)arg5 password:(id)arg6 oldUsername:(id)arg7 oldPassword:(id)arg8 modifiedDataClasses:(id)arg9 clientName:(id)arg10 ;
-(NSString *)accountTypeIdentifier;
-(NSSet *)modifiedDataClasses;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
@end

