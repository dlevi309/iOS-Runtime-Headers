/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PHAirPlayControllerContentProvider;
@class NSPointerArray, UIViewController;

@interface PUAirPlayContentRegistry : NSObject {

	id<PHAirPlayControllerContentProvider> _currentContentProvider;
	NSPointerArray* __contentProviders;
	UIViewController* __cachedCurrentContent;

}

@property (setter=_setContentProviders:,nonatomic,retain) NSPointerArray * _contentProviders;                                               //@synthesize _contentProviders=__contentProviders - In the implementation block
@property (setter=_setCachedCurrentContent:,nonatomic,retain) UIViewController * _cachedCurrentContent;                                     //@synthesize _cachedCurrentContent=__cachedCurrentContent - In the implementation block
@property (assign,setter=_setCurrentContentProvider:,nonatomic) id<PHAirPlayControllerContentProvider> currentContentProvider;              //@synthesize currentContentProvider=_currentContentProvider - In the implementation block
-(void)clearContent;
-(unsigned long long)_indexOfContentProvider:(id)arg1 ;
-(id)init;
-(void)_invalidateCurrentContent;
-(UIViewController *)_cachedCurrentContent;
-(void)_updateCurrentContentProvider;
-(id<PHAirPlayControllerContentProvider>)currentContentProvider;
-(void)_setCachedCurrentContent:(id)arg1 ;
-(void)addContentProvider:(id)arg1 ;
-(void)_setCurrentContentProvider:(id)arg1 ;
-(void)_setContentProviders:(id)arg1 ;
-(void)removeContentProvider:(id)arg1 ;
-(NSPointerArray *)_contentProviders;
-(id)contentForController:(id)arg1 ;
@end

