/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue {

	SCD_Struct_CM9 _timeMapping;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(SCD_Struct_CM9)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(SCD_Struct_CM9)CMTimeMappingValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
@end

