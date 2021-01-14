/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMDMRAVEndpoint, NSString, NSError;

@interface HMDMROutputDeviceStatus : NSObject {

	HMDMRAVEndpoint* _outputEndpoint;
	NSString* _outputUID;
	NSError* _error;

}

@property (nonatomic,readonly) HMDMRAVEndpoint * outputEndpoint;              //@synthesize outputEndpoint=_outputEndpoint - In the implementation block
@property (nonatomic,readonly) NSString * outputUID;                          //@synthesize outputUID=_outputUID - In the implementation block
@property (nonatomic,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOutputUID:(id)arg1 error:(id)arg2 ;
-(id)initWithOutputEndpoint:(id)arg1 error:(id)arg2 ;
-(NSString *)outputUID;
-(HMDMRAVEndpoint *)outputEndpoint;
-(id)initWithOutputUID:(id)arg1 ;
-(id)initWithOutputEndpoint:(id)arg1 ;
@end

