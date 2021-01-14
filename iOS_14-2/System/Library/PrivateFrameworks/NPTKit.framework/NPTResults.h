/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPTMetricResult, NPTPingResult, NSDictionary;

@interface NPTResults : NSObject <NSSecureCoding, NSCopying> {

	NPTMetricResult* _downloadResults;
	NPTMetricResult* _uploadResults;
	NPTPingResult* _pingResults;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) NPTMetricResult * downloadResults;              //@synthesize downloadResults=_downloadResults - In the implementation block
@property (nonatomic,retain) NPTMetricResult * uploadResults;                //@synthesize uploadResults=_uploadResults - In the implementation block
@property (nonatomic,retain) NPTPingResult * pingResults;                    //@synthesize pingResults=_pingResults - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * asDictionary; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPTMetricResult *)downloadResults;
-(NPTMetricResult *)uploadResults;
-(NPTPingResult *)pingResults;
-(void)setDownloadResults:(NPTMetricResult *)arg1 ;
-(void)setUploadResults:(NPTMetricResult *)arg1 ;
-(void)setPingResults:(NPTPingResult *)arg1 ;
@end

