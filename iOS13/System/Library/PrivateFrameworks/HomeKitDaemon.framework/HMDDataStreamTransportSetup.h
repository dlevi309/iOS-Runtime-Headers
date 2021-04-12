/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDataStreamTransportCommand, HMDDataStreamTransportTransportType, NSData;

@interface HMDDataStreamTransportSetup : NSObject <NSCopying> {

	HMDDataStreamTransportCommand* _command;
	HMDDataStreamTransportTransportType* _transportType;
	NSData* _controllerKeySalt;

}

@property (nonatomic,retain) HMDDataStreamTransportCommand * command;                          //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) HMDDataStreamTransportTransportType * transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSData * controllerKeySalt;                                       //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDDataStreamTransportTransportType *)transportType;
-(void)setTransportType:(HMDDataStreamTransportTransportType *)arg1 ;
-(void)setCommand:(HMDDataStreamTransportCommand *)arg1 ;
-(HMDDataStreamTransportCommand *)command;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setControllerKeySalt:(NSData *)arg1 ;
-(NSData *)controllerKeySalt;
-(id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3 ;
@end

