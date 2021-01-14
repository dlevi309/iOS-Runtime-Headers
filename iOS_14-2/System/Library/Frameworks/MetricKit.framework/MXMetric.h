/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)init;
-(id)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurementFormatter *)measurementFormatter;
-(id)DictionaryRepresentation;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
@end

