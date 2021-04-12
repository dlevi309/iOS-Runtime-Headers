/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXMetaData, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding> {

	MXMetaData* _metaData;
	NSString* _applicationVersion;
	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
@property (retain) MXMetaData * metaData;                                      //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * applicationVersion;                            //@synthesize applicationVersion=_applicationVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetaData:(MXMetaData *)arg1 ;
-(MXMetaData *)metaData;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationVersion;
-(NSMeasurementFormatter *)measurementFormatter;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 ;
@end

