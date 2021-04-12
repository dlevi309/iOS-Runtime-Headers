/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKUserInformation *)userInformation;
-(BOOL)makePrivateEmail;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(void)setMakePrivateEmail:(BOOL)arg1 ;
@end

