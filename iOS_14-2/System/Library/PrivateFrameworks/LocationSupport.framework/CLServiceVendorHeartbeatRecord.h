/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	int _residentCount;
	CLSilo* _silo;
	Class _svcClass;

}

@property (nonatomic,readonly) CLSilo * silo;                //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) Class svcClass;               //@synthesize svcClass=_svcClass - In the implementation block
@property (assign,nonatomic) int residentCount;              //@synthesize residentCount=_residentCount - In the implementation block
@property (nonatomic,readonly) int synCount;                 //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                 //@synthesize ackCount=_ackCount - In the implementation block
-(void)ack;
-(int)synCount;
-(id)initTrackingServiceClass:(Class)arg1 ;
-(Class)svcClass;
-(void)setResidentCount:(int)arg1 ;
-(void)syn;
-(int)ackCount;
-(int)residentCount;
-(CLSilo *)silo;
@end

