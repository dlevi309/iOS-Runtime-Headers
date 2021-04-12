/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSString* _domain;
	NSNumber* _fallbackNumberValue;
	NSString* _key;
	BOOL _shouldInvertBoolValue;

}

@property (nonatomic,copy) NSString * domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSNumber * fallbackNumberValue;              //@synthesize fallbackNumberValue=_fallbackNumberValue - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL shouldInvertBoolValue;                //@synthesize shouldInvertBoolValue=_shouldInvertBoolValue - In the implementation block
@property (nonatomic,readonly) BOOL currentBoolValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setShouldInvertBoolValue:(BOOL)arg1 ;
-(void)setFallbackNumberValue:(NSNumber *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)currentBoolValue;
-(NSNumber *)fallbackNumberValue;
-(BOOL)shouldInvertBoolValue;
@end

