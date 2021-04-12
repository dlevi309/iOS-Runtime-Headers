/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/


@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject {

	FMDEmergencyCallInfoPublisherConfiguration* _publisherConfig;

}

@property (nonatomic,retain) FMDEmergencyCallInfoPublisherConfiguration * publisherConfig;              //@synthesize publisherConfig=_publisherConfig - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(void)publishInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMDEmergencyCallInfoPublisherConfiguration *)publisherConfig;
-(void)setPublisherConfig:(FMDEmergencyCallInfoPublisherConfiguration *)arg1 ;
@end

