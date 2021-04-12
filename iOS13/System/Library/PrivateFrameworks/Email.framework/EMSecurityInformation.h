/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSigned;
-(BOOL)isEncrypted;
-(NSString *)ef_publicDescription;
-(NSError *)smimeError;
-(BOOL)hasEncryptedDescendantPart;
-(id)initWithSigners:(id)arg1 isEncrypted:(BOOL)arg2 hasEncryptedDescendantPart:(BOOL)arg3 smimeError:(id)arg4 ;
-(NSArray *)signers;
-(void)reevaluateTrustWithNetworkAccessAllowed;
@end

