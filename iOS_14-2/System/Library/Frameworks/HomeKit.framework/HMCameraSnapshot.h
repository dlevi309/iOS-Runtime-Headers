/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)captureDate;
-(id)initWithSnapshot:(id)arg1 ;
@end

