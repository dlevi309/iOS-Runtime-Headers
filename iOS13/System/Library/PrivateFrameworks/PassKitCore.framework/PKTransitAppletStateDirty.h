/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKTransitAppletStateDirty : NSObject <NSSecureCoding, NSCopying> {

	NSString* _passUniqueIdentifier;
	NSString* _secureElementIdentifier;
	NSString* _applicationIdentifier;
	NSString* _dpanIdentifier;

}

@property (nonatomic,copy) NSString * passUniqueIdentifier;                 //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dpanIdentifier;                       //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setDpanIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToPKTransitAppletStateDirty:(id)arg1 ;
-(id)initWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 ;
@end

