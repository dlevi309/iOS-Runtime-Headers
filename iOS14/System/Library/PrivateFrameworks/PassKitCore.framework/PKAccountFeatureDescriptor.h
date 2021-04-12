/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSArray;

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _maximumAmount;
	NSString* _merchantIdentifier;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumAmount;                        //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumAmount;                        //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                            //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;              //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)maximumAmount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToAccountFeatureDescriptor:(id)arg1 ;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(NSDecimalNumber *)minimumAmount;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

