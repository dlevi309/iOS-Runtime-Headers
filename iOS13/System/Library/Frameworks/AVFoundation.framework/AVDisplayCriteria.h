/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {

	AVDisplayCriteriaInternal* _displayCriteria;

}

@property (nonatomic,readonly) float refreshRate; 
@property (readonly) int videoDynamicRange; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)refreshRate;
-(id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2 ;
-(int)videoDynamicRange;
@end

