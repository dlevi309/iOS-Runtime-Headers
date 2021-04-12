/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric {

	NSMeasurement* _cumulativeWifiUpload;
	NSMeasurement* _cumulativeWifiDownload;
	NSMeasurement* _cumulativeCellularUpload;
	NSMeasurement* _cumulativeCellularDownload;

}

@property (readonly) NSMeasurement * cumulativeWifiUpload;                    //@synthesize cumulativeWifiUpload=_cumulativeWifiUpload - In the implementation block
@property (readonly) NSMeasurement * cumulativeWifiDownload;                  //@synthesize cumulativeWifiDownload=_cumulativeWifiDownload - In the implementation block
@property (readonly) NSMeasurement * cumulativeCellularUpload;                //@synthesize cumulativeCellularUpload=_cumulativeCellularUpload - In the implementation block
@property (readonly) NSMeasurement * cumulativeCellularDownload;              //@synthesize cumulativeCellularDownload=_cumulativeCellularDownload - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeWifiUploadMeasurement:(id)arg1 cumulativeWifiDownloadMeasurement:(id)arg2 cumulativeCellularUploadMeasurement:(id)arg3 cumulativeCellularDownloadMeasurement:(id)arg4 ;
-(NSMeasurement *)cumulativeWifiUpload;
-(NSMeasurement *)cumulativeWifiDownload;
-(NSMeasurement *)cumulativeCellularUpload;
-(NSMeasurement *)cumulativeCellularDownload;
@end

