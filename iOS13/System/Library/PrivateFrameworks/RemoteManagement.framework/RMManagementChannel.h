/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RMManagementChannel : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSString* _accountIdentifier;
	NSString* _accountDescription;
	NSString* _enrollmentToken;

}

@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,copy) NSString * enrollmentToken;                          //@synthesize enrollmentToken=_enrollmentToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)accountIdentifier;
-(NSString *)accountDescription;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 enrollmentToken:(id)arg3 accountIdentifier:(id)arg4 accountDescription:(id)arg5 ;
-(NSString *)enrollmentToken;
-(void)setEnrollmentToken:(NSString *)arg1 ;
@end

