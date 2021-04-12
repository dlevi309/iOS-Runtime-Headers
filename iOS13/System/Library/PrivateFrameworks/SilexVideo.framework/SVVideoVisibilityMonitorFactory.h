/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVisibilityMonitorFactory.h>

@protocol SVVideoVisiblePercentageManager;
@class NSString;

@interface SVVideoVisibilityMonitorFactory : NSObject <SVVisibilityMonitorFactory> {

	id<SVVideoVisiblePercentageManager> _videoVisiblePercentageManager;

}

@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> videoVisiblePercentageManager;              //@synthesize videoVisiblePercentageManager=_videoVisiblePercentageManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createVisibilityMonitorForVideo:(id)arg1 ;
-(id)initWithVideoVisiblePercentageManager:(id)arg1 ;
-(id<SVVideoVisiblePercentageManager>)videoVisiblePercentageManager;
@end

