/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoVisibilityMonitorProviding.h>

@protocol SVVisibilityMonitorFactory;
@class SVWeakObjectCache, NSString;

@interface SVVideoVisibilityMonitorManager : NSObject <SVVideoVisibilityMonitorProviding> {

	id<SVVisibilityMonitorFactory> _videoVisibilityMonitorFactory;
	SVWeakObjectCache* _visibilityMonitors;

}

@property (nonatomic,readonly) id<SVVisibilityMonitorFactory> videoVisibilityMonitorFactory;              //@synthesize videoVisibilityMonitorFactory=_videoVisibilityMonitorFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * visibilityMonitors;                                    //@synthesize visibilityMonitors=_visibilityMonitors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visibilityMonitorForVideo:(id)arg1 ;
-(id)initWithVideoVisibilityMonitorFactory:(id)arg1 ;
-(SVWeakObjectCache *)visibilityMonitors;
-(id<SVVisibilityMonitorFactory>)videoVisibilityMonitorFactory;
@end

