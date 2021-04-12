/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource {

	NSDate* _captureDate;

}

@property (nonatomic,copy,readonly) NSDate * captureDate;              //@synthesize captureDate=_captureDate - In the implementation block
-(void)dealloc;
-(NSDate *)captureDate;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6 ;
-(void)_releaseSlotIdentifier;
@end

