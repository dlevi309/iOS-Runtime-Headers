/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id)flush;
-(id<HMBLocalZoneID>)zoneID;
-(id)shutdown;
-(id)destroy;
-(NAFuture *)startUp;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
-(void)startUpWithLocalZone:(id)arg1;

@end

