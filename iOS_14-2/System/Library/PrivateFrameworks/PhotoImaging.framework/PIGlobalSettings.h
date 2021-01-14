/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PIGlobalSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _settings;
	BOOL _forceGlassesMatteOff;
	BOOL _forceSpillMatteOff;
	BOOL _allowSpillMatteOnOlderPortraitV2Captures;

}

@property (assign,nonatomic) BOOL forceGlassesMatteOff;                                  //@synthesize forceGlassesMatteOff=_forceGlassesMatteOff - In the implementation block
@property (assign,nonatomic) BOOL forceSpillMatteOff;                                    //@synthesize forceSpillMatteOff=_forceSpillMatteOff - In the implementation block
@property (assign,nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;              //@synthesize allowSpillMatteOnOlderPortraitV2Captures=_allowSpillMatteOnOlderPortraitV2Captures - In the implementation block
+(id)globalSettings;
+(id)IPXEditSettings;
+(id)PUEditSettings;
+(BOOL)falseColorHDR;
+(void)setFalseColorHDR:(BOOL)arg1 ;
-(id)init;
-(void)setForceSpillMatteOff:(BOOL)arg1 ;
-(void)setAllowSpillMatteOnOlderPortraitV2Captures:(BOOL)arg1 ;
-(BOOL)forceGlassesMatteOff;
-(BOOL)allowSpillMatteOnOlderPortraitV2Captures;
-(void)setForceGlassesMatteOff:(BOOL)arg1 ;
-(BOOL)forceSpillMatteOff;
-(id)decoratorRenderFiltersForImages;
-(id)decoratorRenderFiltersForVideos;
@end

