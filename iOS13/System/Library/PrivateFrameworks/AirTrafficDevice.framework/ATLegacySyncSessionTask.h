/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTraffic/ATSessionTask.h>

@protocol ATClient, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATLegacySyncSessionTask : ATSessionTask {

	NSString* _dataClass;
	id<ATClient> _client;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _grappaSessionID;

}

@property (nonatomic,copy,readonly) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned grappaSessionID;                 //@synthesize grappaSessionID=_grappaSessionID - In the implementation block
-(void)cancel;
-(void)start;
-(NSString *)dataClass;
-(id)sessionGroupingKey;
-(unsigned)grappaSessionID;
-(void)_finishWithError:(id)arg1 shouldAddAssetTask:(BOOL)arg2 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)prepareWithHostAnchor:(id)arg1 version:(id)arg2 ;
-(void)reconcileWithAnchor:(id)arg1 syncType:(unsigned)arg2 ;
-(void)setGrappaSessionID:(unsigned)arg1 ;
@end

