/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject {

	HMFUnfairLock* _lock;
	_HMCameraSource* _source;

}

@property (nonatomic,retain) _HMCameraSource * source;              //@synthesize source=_source - In the implementation block
-(void)setSource:(_HMCameraSource *)arg1 ;
-(_HMCameraSource *)source;
-(id)aspectRatio;
-(id)initWithSource:(id)arg1 ;
@end

