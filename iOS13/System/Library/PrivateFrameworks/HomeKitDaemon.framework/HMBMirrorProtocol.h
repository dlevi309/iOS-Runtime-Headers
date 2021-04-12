/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id<HMBLocalZoneID>)zoneID;
-(id)destroy;
-(id)flush;
-(id)shutdown;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
-(NAFuture *)startUp;
-(void)startUpWithLocalZone:(id)arg1;

@end

