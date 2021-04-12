/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stableIdentifier;
	NSString* _name;
	NSString* _model;
	NSString* _systemVersion;
	long long _vendorId;
	long long _productId;
	long long _role;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                          //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign,nonatomic) long long vendorId;                              //@synthesize vendorId=_vendorId - In the implementation block
@property (assign,nonatomic) long long productId;                             //@synthesize productId=_productId - In the implementation block
@property (assign,nonatomic) long long role;                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,copy,readonly) NSString * stableIdentifier;              //@synthesize stableIdentifier=_stableIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)systemVersion;
-(NSString *)model;
-(void)setVendorId:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(long long)vendorId;
-(NSString *)name;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)stableIdentifier;
-(void)setProductId:(long long)arg1 ;
-(id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7 ;
-(long long)productId;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)role;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

