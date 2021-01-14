/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTraffic/ATSessionTask.h>

@protocol ATClient, OS_dispatch_queue;
@class NSObject, NSString;

@interface ATLegacySyncSessionTask : ATSessionTask {

	id<ATClient> _client;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _grappaSessionID;

}

@property (nonatomic,copy,readonly) NSString * dataClass; 
@property (assign,nonatomic) unsigned grappaSessionID;                 //@synthesize grappaSessionID=_grappaSessionID - In the implementation block
-(void)start;
-(id)sessionGroupingKey;
-(id)initWithDataClass:(id)arg1 ;
-(void)cancel;
-(unsigned)grappaSessionID;
-(void)_finishWithError:(id)arg1 shouldAddAssetTask:(BOOL)arg2 ;
-(void)prepareWithHostAnchor:(id)arg1 version:(id)arg2 ;
-(void)reconcileWithAnchor:(id)arg1 syncType:(unsigned)arg2 ;
-(void)setGrappaSessionID:(unsigned)arg1 ;
@end

