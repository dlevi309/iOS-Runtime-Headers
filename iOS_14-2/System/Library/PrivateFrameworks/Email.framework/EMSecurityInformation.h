/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSArray, NSError, NSString;

@interface EMSecurityInformation : NSObject <NSSecureCoding, EFPubliclyDescribable> {

	BOOL _isEncrypted;
	BOOL _hasEncryptedDescendantPart;
	NSArray* _signers;
	NSError* _smimeError;

}

@property (nonatomic,readonly) BOOL isEncrypted;                                  //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (nonatomic,readonly) BOOL isSigned; 
@property (nonatomic,readonly) NSArray * signers;                                 //@synthesize signers=_signers - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedDescendantPart;                   //@synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart - In the implementation block
@property (nonatomic,readonly) NSError * smimeError;                              //@synthesize smimeError=_smimeError - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isSigned;
-(NSString *)ef_publicDescription;
-(BOOL)hasEncryptedDescendantPart;
-(id)initWithSigners:(id)arg1 isEncrypted:(BOOL)arg2 hasEncryptedDescendantPart:(BOOL)arg3 smimeError:(id)arg4 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)signers;
-(BOOL)isEncrypted;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)smimeError;
@end

