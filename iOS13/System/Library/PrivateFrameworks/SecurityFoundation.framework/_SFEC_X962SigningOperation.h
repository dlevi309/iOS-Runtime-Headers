/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFSigningOperation.h>

@protocol SFDigestOperation;
@class _SFECKeySpecifier, NSString;

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation> {

	id _x962SigningOperationInternal;
	id<SFDigestOperation> _digestOperation;

}

@property (nonatomic,copy) _SFECKeySpecifier * signingKeySpecifier; 
@property (copy) id<SFDigestOperation> digestOperation;                          //@synthesize digestOperation=_digestOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(_SFECKeySpecifier *)signingKeySpecifier;
-(void)setSigningKeySpecifier:(_SFECKeySpecifier *)arg1 ;
@end

