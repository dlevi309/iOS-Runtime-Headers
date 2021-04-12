/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)DictionaryRepresentation;
-(NSMeasurementFormatter *)measurementFormatter;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
@end

