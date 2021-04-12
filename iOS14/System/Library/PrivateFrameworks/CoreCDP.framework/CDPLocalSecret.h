/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CDPLocalSecret : NSObject <NSSecureCoding> {

	NSString* _validatedSecret;
	unsigned long long _secretType;

}

@property (nonatomic,readonly) NSString * validatedSecret;                 //@synthesize validatedSecret=_validatedSecret - In the implementation block
@property (nonatomic,readonly) unsigned long long secretType;              //@synthesize secretType=_secretType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)secretType;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)validatedSecret;
-(id)initWithValidatedSecret:(id)arg1 secretType:(unsigned long long)arg2 ;
@end

