/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSService, NSMutableDictionary;

@interface NPKTargetDeviceAssertionManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	IDSService* _transportationService;
	NSMutableDictionary* _outstandingAssertionStatusUpdaters;
	NSMutableDictionary* _assertTypesUUIDsMap;

}

@property (nonatomic,retain) NSMutableDictionary * outstandingAssertionStatusUpdaters;              //@synthesize outstandingAssertionStatusUpdaters=_outstandingAssertionStatusUpdaters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assertTypesUUIDsMap;                             //@synthesize assertTypesUUIDsMap=_assertTypesUUIDsMap - In the implementation block
@property (nonatomic,readonly) IDSService * transportationService;                                  //@synthesize transportationService=_transportationService - In the implementation block
-(id)_sendAssertionRequest:(id)arg1 ;
-(id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg1 assertionType:(unsigned long long)arg2 assertionUUID:(id)arg3 ;
-(void)_addOutstandingAssertionStatusUpdater:(id)arg1 withAssertType:(int)arg2 ;
-(id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg1 ;
-(NSMutableDictionary *)assertTypesUUIDsMap;
-(IDSService *)transportationService;
-(id)_IDSSendOptions;
-(NSMutableDictionary *)outstandingAssertionStatusUpdaters;
-(id)initWithTransportationService:(id)arg1 ;
-(id)acquireAssertionOfType:(unsigned long long)arg1 ;
-(void)invalidateAssertionWithUUID:(id)arg1 ;
-(id)assertionsUUIDsOfType:(unsigned long long)arg1 ;
-(void)setOutstandingAssertionStatusUpdaters:(NSMutableDictionary *)arg1 ;
-(void)setAssertTypesUUIDsMap:(NSMutableDictionary *)arg1 ;
@end

