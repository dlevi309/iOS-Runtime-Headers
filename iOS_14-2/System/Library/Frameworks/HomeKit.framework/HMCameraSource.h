/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject {

	HMFUnfairLock* _lock;
	_HMCameraSource* _source;

}

@property (nonatomic,retain) _HMCameraSource * source;              //@synthesize source=_source - In the implementation block
-(id)initWithSource:(id)arg1 ;
-(id)aspectRatio;
-(void)setSource:(_HMCameraSource *)arg1 ;
-(_HMCameraSource *)source;
@end

