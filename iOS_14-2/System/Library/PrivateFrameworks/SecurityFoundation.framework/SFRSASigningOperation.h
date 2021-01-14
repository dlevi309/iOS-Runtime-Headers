/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFSigningOperation.h>

@class _SFKeySpecifier, _SFRSAKeySpecifier, NSString;

@interface SFRSASigningOperation : NSObject <SFSigningOperation> {

	id _rsaSigningOperationInternal;

}

@property (nonatomic,copy) _SFRSAKeySpecifier * signingKeySpecifier; 
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFRSAKeySpecifier *)signingKeySpecifier;
-(void)setSigningKeySpecifier:(_SFRSAKeySpecifier *)arg1 ;
@end

