/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSString;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation> {

	id _x963KeyDerivationOperationInternal;

}

@property (nonatomic,copy) id<SFKeyDerivingOperation> sharedSecretOperation; 
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)keySource;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id<SFKeyDerivingOperation>)sharedSecretOperation;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(id)initWithSharedSecretOperation:(id)arg1 ;
-(id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2 ;
-(void)setSharedSecretOperation:(id<SFKeyDerivingOperation>)arg1 ;
@end

