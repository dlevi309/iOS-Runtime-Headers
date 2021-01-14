/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface EFStringHash : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable> {

	long long _primitiveHash;

}

@property (nonatomic,readonly) long long primitiveHash;                           //@synthesize primitiveHash=_primitiveHash - In the implementation block
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(long long)int64Value;
-(NSString *)ef_publicDescription;
-(id)initWithMD5Digest:(id)arg1 ;
-(long long)primitiveHash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(id)initWithHash:(long long)arg1 ;
-(id)_hexStringFromHash:(long long)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)redactedStringValue;
@end

