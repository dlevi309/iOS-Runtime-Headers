/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKCredential.h>

@class NSString;

@interface AKPasswordCredential : NSObject <AKCredential> {

	NSString* _userIdentifier;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * password;                    //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(id)initWithUser:(id)arg1 password:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

