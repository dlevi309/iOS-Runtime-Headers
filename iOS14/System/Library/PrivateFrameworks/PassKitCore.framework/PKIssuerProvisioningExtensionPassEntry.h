/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject {

	NSString* _identifier;
	NSString* _title;
	CGImageRef _art;
	long long _type;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CGImageRef art;                     //@synthesize art=_art - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGImageRef)art;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)paymentPassEntry;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(CGImageRef)arg4 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)dealloc;
@end

