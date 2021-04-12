/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDataStreamTransportTransportType;

@interface HMDDataStreamTransportConfiguration : NSObject <NSCopying> {

	HMDDataStreamTransportTransportType* _transportType;

}

@property (nonatomic,retain) HMDDataStreamTransportTransportType * transportType;              //@synthesize transportType=_transportType - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDDataStreamTransportTransportType *)transportType;
-(void)setTransportType:(HMDDataStreamTransportTransportType *)arg1 ;
-(id)initWithTransportType:(id)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end

