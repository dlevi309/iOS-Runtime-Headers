/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _variableOverides;
	SCD_Struct_MK26 _options;

}

@property (nonatomic,readonly) SCD_Struct_MK26 options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * variableOverides;              //@synthesize variableOverides=_variableOverides - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_MK26)options;
-(id)initWithOptions:(SCD_Struct_MK26)arg1 variableOverrides:(id)arg2 ;
-(BOOL)isEqualToServerFormattedStringParameters:(id)arg1 ;
-(NSDictionary *)variableOverides;
-(id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

