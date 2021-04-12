/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {

	NSNumber* _authenticatedAccountIdentifier;
	long long _performedButtonIndex;
	NSURL* _redirectURL;
	long long _selectedButtonIndex;

}

@property (nonatomic,copy) NSNumber * authenticatedAccountIdentifier;              //@synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier - In the implementation block
@property (assign,nonatomic) long long performedButtonIndex;                       //@synthesize performedButtonIndex=_performedButtonIndex - In the implementation block
@property (nonatomic,copy) NSURL * redirectURL;                                    //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign,nonatomic) long long selectedButtonIndex;                        //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
-(NSURL *)redirectURL;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(NSNumber *)authenticatedAccountIdentifier;
-(void)setAuthenticatedAccountIdentifier:(NSNumber *)arg1 ;
-(long long)performedButtonIndex;
-(void)setPerformedButtonIndex:(long long)arg1 ;
@end

