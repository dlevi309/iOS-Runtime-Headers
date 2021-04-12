/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder {

	NSString* _sourceAccount;
	NSString* _targetAccount;
	NSString* _dpanIdentifier;

}

@property (nonatomic,copy) NSString * sourceAccount;               //@synthesize sourceAccount=_sourceAccount - In the implementation block
@property (nonatomic,copy) NSString * targetAccount;               //@synthesize targetAccount=_targetAccount - In the implementation block
@property (nonatomic,copy) NSString * dpanIdentifier;              //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceAccount;
-(NSString *)targetAccount;
-(id)serviceProviderData;
-(void)setSourceAccount:(NSString *)arg1 ;
-(void)setTargetAccount:(NSString *)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setDpanIdentifier:(NSString *)arg1 ;
@end

