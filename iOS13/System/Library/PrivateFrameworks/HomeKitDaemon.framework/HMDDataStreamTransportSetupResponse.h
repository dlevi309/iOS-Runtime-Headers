/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDataStreamTransportStatus, HMDDataStreamTransportParameters, NSData;

@interface HMDDataStreamTransportSetupResponse : NSObject <NSCopying> {

	HMDDataStreamTransportStatus* _status;
	HMDDataStreamTransportParameters* _parameters;
	NSData* _accessoryKeySalt;

}

@property (nonatomic,retain) HMDDataStreamTransportStatus * status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) HMDDataStreamTransportParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                  //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDDataStreamTransportStatus *)status;
-(HMDDataStreamTransportParameters *)parameters;
-(void)setParameters:(HMDDataStreamTransportParameters *)arg1 ;
-(void)setStatus:(HMDDataStreamTransportStatus *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(NSData *)accessoryKeySalt;
-(id)initWithStatus:(id)arg1 parameters:(id)arg2 accessoryKeySalt:(id)arg3 ;
@end

