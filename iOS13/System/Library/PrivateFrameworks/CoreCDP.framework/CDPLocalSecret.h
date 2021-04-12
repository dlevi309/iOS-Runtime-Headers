/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValidatedSecret:(id)arg1 secretType:(unsigned long long)arg2 ;
-(NSString *)validatedSecret;
-(unsigned long long)secretType;
@end

