/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)assetTimerFired;
-(void)updateAssetTimer;
@end

