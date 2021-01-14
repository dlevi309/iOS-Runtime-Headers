/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	CGSize _maxCompactSize;
	CGSize _maxExpandedSize;
	_NCWidgetViewController* _hostViewController;
	long long _activeDisplayMode;
	long long _largestAvailableDisplayMode;

}

@property (assign,setter=_setHostViewController:,getter=_hostViewController,nonatomic,__weak) _NCWidgetViewController * hostViewController;                  //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,setter=_setActiveDisplayMode:,getter=_activeDisplayMode,nonatomic) long long activeDisplayMode;                                            //@synthesize activeDisplayMode=_activeDisplayMode - In the implementation block
@property (assign,setter=_setLargestAvailableDisplayMode:,getter=_largestAvailableDisplayMode,nonatomic) long long largestAvailableDisplayMode;              //@synthesize largestAvailableDisplayMode=_largestAvailableDisplayMode - In the implementation block
-(void)_setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_activeDisplayMode;
-(long long)_largestAvailableDisplayMode;
-(CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1 ;
-(BOOL)widgetIsForeground;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(CGSize)_maximumSizeForDisplayMode:(long long)arg1 ;
-(void)setWidgetLargestAvailableDisplayMode:(long long)arg1 ;
-(id)_hostViewController;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(long long)widgetActiveDisplayMode;
-(void)_setHostViewController:(id)arg1 ;
-(long long)widgetLargestAvailableDisplayMode;
-(void)_setActiveDisplayMode:(long long)arg1 ;
@end

