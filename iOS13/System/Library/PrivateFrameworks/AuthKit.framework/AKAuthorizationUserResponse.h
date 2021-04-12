/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKCredentialRequestProtocol;
@class AKAuthorizationScopesUserSelection, NSNumber, NSString;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding> {

	id<AKCredentialRequestProtocol> _selectedRequest;
	AKAuthorizationScopesUserSelection* _userSelection;
	NSNumber* _loginChoice;
	NSString* _rawAccountPassword;

}

@property (nonatomic,retain) id<AKCredentialRequestProtocol> selectedRequest;                 //@synthesize selectedRequest=_selectedRequest - In the implementation block
@property (nonatomic,retain) AKAuthorizationScopesUserSelection * userSelection;              //@synthesize userSelection=_userSelection - In the implementation block
@property (nonatomic,retain) NSNumber * loginChoice;                                          //@synthesize loginChoice=_loginChoice - In the implementation block
@property (nonatomic,copy) NSString * rawAccountPassword;                                     //@synthesize rawAccountPassword=_rawAccountPassword - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKAuthorizationScopesUserSelection *)userSelection;
-(void)setUserSelection:(AKAuthorizationScopesUserSelection *)arg1 ;
-(id<AKCredentialRequestProtocol>)selectedRequest;
-(void)setSelectedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(NSNumber *)loginChoice;
-(void)setLoginChoice:(NSNumber *)arg1 ;
-(NSString *)rawAccountPassword;
-(void)setRawAccountPassword:(NSString *)arg1 ;
@end

