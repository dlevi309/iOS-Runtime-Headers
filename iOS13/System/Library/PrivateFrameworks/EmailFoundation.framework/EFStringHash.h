/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(long long)int64Value;
-(id)initWithHash:(long long)arg1 ;
-(NSString *)ef_publicDescription;
-(id)redactedStringValue;
-(id)initWithMD5Digest:(id)arg1 ;
-(long long)primitiveHash;
-(id)_hexStringFromHash:(long long)arg1 ;
@end

