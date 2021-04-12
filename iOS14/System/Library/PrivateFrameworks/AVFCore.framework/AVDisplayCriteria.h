/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {

	AVDisplayCriteriaInternal* _displayCriteria;

}

@property (nonatomic,readonly) float refreshRate; 
@property (readonly) int videoDynamicRange; 
-(float)refreshRate;
-(id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2 ;
-(int)videoDynamicRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

