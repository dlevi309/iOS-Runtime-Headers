/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)assetTimerFired;
-(void)updateAssetTimer;
@end

