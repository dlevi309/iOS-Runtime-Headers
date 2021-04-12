/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(NSDecimalNumber *)maximumAmount;
-(NSDecimalNumber *)minimumAmount;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToAccountFeatureDescriptor:(id)arg1 ;
@end

