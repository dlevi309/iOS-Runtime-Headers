/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCredentialServiceIdentifier, NSString;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding> {

	ASCredentialServiceIdentifier* _serviceIdentifier;
	NSString* _user;
	NSString* _recordIdentifier;
	long long _rank;

}

@property (nonatomic,readonly) ASCredentialServiceIdentifier * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordIdentifier;                               //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (assign,nonatomic) long long rank;                                                   //@synthesize rank=_rank - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSString *)recordIdentifier;
-(ASCredentialServiceIdentifier *)serviceIdentifier;
-(id)_initWithFoundationCredentialIdentity:(id)arg1 ;
-(id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
@end

