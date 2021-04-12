/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

