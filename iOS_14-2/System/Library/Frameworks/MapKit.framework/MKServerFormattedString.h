/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOServerFormattedString;
@class MKServerFormattedStringParameters;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding> {

	id<GEOServerFormattedString> _geoServerString;
	MKServerFormattedStringParameters* _parameters;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> geoServerString;                     //@synthesize geoServerString=_geoServerString - In the implementation block
@property (nonatomic,copy,readonly) MKServerFormattedStringParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributesForServerFormatStyle:(long long)arg1 ;
-(MKServerFormattedStringParameters *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2 ;
-(id<GEOServerFormattedString>)geoServerString;
-(id)_attributesByTokenForFormatStyles:(id)arg1 ;
-(id)initWithGeoServerString:(id)arg1 parameters:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToServerFormattedString:(id)arg1 ;
-(id)multiPartAttributedStringWithAttributes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

