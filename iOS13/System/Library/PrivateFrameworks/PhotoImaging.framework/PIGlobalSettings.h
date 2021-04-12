/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PIGlobalSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _settings;

}
+(id)globalSettings;
-(id)init;
-(id)decoratorRenderFiltersForImages;
-(id)decoratorRenderFiltersForVideos;
@end

