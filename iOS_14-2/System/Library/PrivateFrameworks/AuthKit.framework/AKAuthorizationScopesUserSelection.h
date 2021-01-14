/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding> {

	BOOL _makePrivateEmail;
	AKUserInformation* _userInformation;

}

@property (nonatomic,copy) AKUserInformation * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (assign,nonatomic) BOOL makePrivateEmail;                          //@synthesize makePrivateEmail=_makePrivateEmail - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(AKUserInformation *)userInformation;
-(BOOL)makePrivateEmail;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(void)setMakePrivateEmail:(BOOL)arg1 ;
@end

