/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRenderer.h>

@interface ARUIRingsViewRenderer : ARUIRenderer {

	unsigned long long _maximumRingCount;

}

@property (nonatomic,readonly) unsigned long long maximumRingCount;              //@synthesize maximumRingCount=_maximumRingCount - In the implementation block
+(id)rendererForRingGroupController:(id)arg1 ;
+(id)rendererForRingGroupControllers:(id)arg1 ;
-(id)initWithMaximumRingCount:(unsigned long long)arg1 commandQueue:(id)arg2 ;
-(id)initWithMaximumRingCount:(unsigned long long)arg1 ;
-(unsigned long long)maximumRingCount;
@end

