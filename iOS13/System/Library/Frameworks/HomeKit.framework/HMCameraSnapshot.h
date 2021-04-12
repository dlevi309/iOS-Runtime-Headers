/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraSnapshot, NSDate;

@interface HMCameraSnapshot : HMCameraSource {

	_HMCameraSnapshot* _snapshot;

}

@property (nonatomic,retain) _HMCameraSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,copy,readonly) NSDate * captureDate; 
-(_HMCameraSnapshot *)snapshot;
-(void)setSnapshot:(_HMCameraSnapshot *)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(NSDate *)captureDate;
@end

