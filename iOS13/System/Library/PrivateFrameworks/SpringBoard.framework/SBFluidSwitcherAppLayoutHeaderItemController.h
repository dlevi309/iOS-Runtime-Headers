/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBAppLayout, NSArray, NSMutableDictionary, NSString;

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable> {

	SBAppLayout* _appLayout;
	NSArray* _displayItems;
	NSMutableDictionary* _displayItemToIcon;
	NSMutableDictionary* _displayItemToLoadedImage;
	NSMutableDictionary* _displayItemToSceneHandle;
	BOOL _invalidated;
	BOOL _useDarkLabels;
	/*^block*/id _updateHandler;

}

@property (assign,getter=isUsingDarkLabels,nonatomic) BOOL useDarkLabels;              //@synthesize useDarkLabels=_useDarkLabels - In the implementation block
@property (nonatomic,copy) id updateHandler;                                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2 ;
-(id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 showCanvasTitles:(BOOL)arg3 ;
-(void)setUseDarkLabels:(BOOL)arg1 ;
-(void)_updateDisplayItemIcons;
-(void)_performUpdateHandler;
-(void)_loadIconForDisplayItem:(id)arg1 ;
-(id)_computeHeaderItems;
-(id)_iconForDisplayItem:(id)arg1 ;
-(BOOL)isUsingDarkLabels;
@end

