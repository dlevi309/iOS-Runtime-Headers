/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFECDHOperation, _SFAuthenticatedEncryptionOperation, _SFKeySpecifier, NSString;

@interface _SFIESOperation : NSObject <_SFEncryptionOperation> {

	id _iesOperationInternal;
	long long _curve;

}

@property (nonatomic,copy) _SFECDHOperation * diffieHellmanOperation; 
@property (nonatomic,copy) _SFAuthenticatedEncryptionOperation * encryptionOperation; 
@property (assign) long long curve;                                                                //@synthesize curve=_curve - In the implementation block
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(long long)curve;
-(id)init;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithCurve:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(void)setCurve:(long long)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(_SFAuthenticatedEncryptionOperation *)encryptionOperation;
-(void)setEncryptionOperation:(_SFAuthenticatedEncryptionOperation *)arg1 ;
-(_SFECDHOperation *)diffieHellmanOperation;
-(id)initWithCurve:(long long)arg1 diffieHellmanOperation:(id)arg2 encryptionOperation:(id)arg3 digestOperation:(id)arg4 ;
-(const ccdigest_info*)_ccDigestInfoWithError:(id*)arg1 ;
-(void)setDiffieHellmanOperation:(_SFECDHOperation *)arg1 ;
@end

