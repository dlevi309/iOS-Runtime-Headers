/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RMManagementChannel : NSObject <NSSecureCoding> {

	BOOL _isEnrolled;
	long long _type;
	NSString* _identifier;
	NSString* _accountIdentifier;
	NSString* _accountDescription;
	NSString* _organizationDescription;
	NSString* _enrollmentToken;

}

@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDescription;                   //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * organizationDescription;              //@synthesize organizationDescription=_organizationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * enrollmentToken;                      //@synthesize enrollmentToken=_enrollmentToken - In the implementation block
@property (nonatomic,readonly) BOOL isEnrolled;                                      //@synthesize isEnrolled=_isEnrolled - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountDescription;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEnrolled;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 enrollmentToken:(id)arg3 accountIdentifier:(id)arg4 accountDescription:(id)arg5 organizationDescription:(id)arg6 isEnrolled:(BOOL)arg7 ;
-(NSString *)enrollmentToken;
-(NSString *)organizationDescription;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 enrollmentToken:(id)arg3 accountIdentifier:(id)arg4 accountDescription:(id)arg5 ;
@end

