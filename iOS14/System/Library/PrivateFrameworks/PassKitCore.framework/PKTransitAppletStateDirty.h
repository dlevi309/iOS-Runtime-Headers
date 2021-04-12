/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(NSString *)applicationIdentifier;
-(BOOL)isEqualToPKTransitAppletStateDirty:(id)arg1 ;
-(id)initWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setDpanIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

