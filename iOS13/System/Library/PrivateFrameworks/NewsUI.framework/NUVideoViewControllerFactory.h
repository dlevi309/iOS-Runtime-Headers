/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoViewControllerFactory.h>

@protocol NUVideoViewControllerFactory <NSObject>
@required
-(id)createVideoViewControllerWithItems:(id)arg1 visibilityMonitor:(id)arg2 eventTrackerConfiguration:(id)arg3 externalAnalyticsReferrer:(id)arg4 placement:(id)arg5 discoverMoreVideosInfo:(id)arg6 activityViewControllerFactory:(id)arg7;

@end


@protocol NFResolver;
@class NSString;

@interface NUVideoViewControllerFactory : NSObject <NUVideoViewControllerFactory> {

	id<NFResolver> _resolver;

}

@property (nonatomic,readonly) id<NFResolver> resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFResolver>)resolver;
-(id)initWithResolver:(id)arg1 ;
-(id)createVideoViewControllerWithItems:(id)arg1 visibilityMonitor:(id)arg2 eventTrackerConfiguration:(id)arg3 externalAnalyticsReferrer:(id)arg4 placement:(id)arg5 discoverMoreVideosInfo:(id)arg6 activityViewControllerFactory:(id)arg7 ;
@end

