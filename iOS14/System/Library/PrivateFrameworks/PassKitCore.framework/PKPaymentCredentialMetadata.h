/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKPaymentCredentialMetadata : NSObject {

	NSString* _localizedDisplayName;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                             //@synthesize value=_value - In the implementation block
+(id)paymentCredentialMetadataWithConfiguration:(id)arg1 ;
+(Class)classForValueType:(id)arg1 ;
-(id)displayString;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(NSString *)value;
@end

