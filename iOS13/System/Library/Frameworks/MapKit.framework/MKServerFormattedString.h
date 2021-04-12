/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MKServerFormattedStringParameters *)parameters;
-(BOOL)isEqualToServerFormattedString:(id)arg1 ;
-(id)multiPartAttributedStringWithAttributes:(id)arg1 ;
-(id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2 ;
-(id<GEOServerFormattedString>)geoServerString;
-(id)_attributesByTokenForFormatStyles:(id)arg1 ;
-(id)initWithGeoServerString:(id)arg1 parameters:(id)arg2 ;
@end

