/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/AKCredentialRequestProtocol.h>

@class NSString, NSUUID;

@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol> {

	NSString* _altDSID;
	NSString* _userIdentifier;
	NSUUID* _requestIdentifier;
	NSUUID* _transactionID;

}

@property (nonatomic,copy) NSString * userIdentifier;                        //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                      //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * transactionID;                  //@synthesize transactionID=_transactionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSString *)userIdentifier;
-(NSUUID *)requestIdentifier;
-(id)init;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)altDSID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)transactionID;
@end

