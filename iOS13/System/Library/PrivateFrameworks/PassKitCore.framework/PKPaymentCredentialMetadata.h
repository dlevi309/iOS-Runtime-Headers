/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)value;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
-(NSString *)localizedDisplayName;
@end

