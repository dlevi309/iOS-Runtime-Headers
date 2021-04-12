/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSData, NSString;

@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling> {

	double _srTimestamp;
	NSData* _mimosaData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)sr_exportRepresentationEnumerator;
@end

