/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _variableOverides;
	SCD_Struct_MK20 _options;

}

@property (nonatomic,readonly) SCD_Struct_MK20 options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * variableOverides;              //@synthesize variableOverides=_variableOverides - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_MK20)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOptions:(SCD_Struct_MK20)arg1 variableOverrides:(id)arg2 ;
-(BOOL)isEqualToServerFormattedStringParameters:(id)arg1 ;
-(NSDictionary *)variableOverides;
-(id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2 ;
@end

