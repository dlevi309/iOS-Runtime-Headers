/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class MTIDFileStorage, MTIDMemoryStorage;

@interface MTIDManager : NSObject {

	MTIDFileStorage* _deviceStorage;
	MTIDFileStorage* _appStorage;
	MTIDMemoryStorage* _sessionStorage;

}

@property (nonatomic,retain) MTIDFileStorage * deviceStorage;                 //@synthesize deviceStorage=_deviceStorage - In the implementation block
@property (nonatomic,retain) MTIDFileStorage * appStorage;                    //@synthesize appStorage=_appStorage - In the implementation block
@property (nonatomic,retain) MTIDMemoryStorage * sessionStorage;              //@synthesize sessionStorage=_sessionStorage - In the implementation block
+(id)shared;
-(MTIDFileStorage *)appStorage;
-(id)storageForNamespace:(id)arg1 ;
-(id)createNamespace:(id)arg1 options:(id)arg2 ;
-(id)deleteNamespace:(id)arg1 ;
-(id)valueForNamespace:(id)arg1 options:(id)arg2 cachePolicy:(long long)arg3 ;
-(id)IDInfoForNamespace:(id)arg1 cachePolicy:(long long)arg2 ;
-(MTIDFileStorage *)deviceStorage;
-(MTIDMemoryStorage *)sessionStorage;
-(id)createNamespace:(id)arg1 ;
-(id)IDInfoForNamespace:(id)arg1 ;
-(id)IDForNamespace:(id)arg1 ;
-(id)resetIDForNamespace:(id)arg1 ;
-(void)setDeviceStorage:(MTIDFileStorage *)arg1 ;
-(void)setAppStorage:(MTIDFileStorage *)arg1 ;
-(void)setSessionStorage:(MTIDMemoryStorage *)arg1 ;
@end

