/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBAppLayout, FBSDisplayIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable> {

	SBAppLayout* _appLayout;
	FBSDisplayIdentity* _displayIdentity;
	NSArray* _displayItems;
	NSMutableDictionary* _displayItemToIcon;
	NSMutableDictionary* _displayItemToLoadedImage;
	NSMutableDictionary* _displayItemToSceneHandle;
	NSMutableSet* _downloadingIcons;
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
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)_stopTrackingDownloadingIcon:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)_startTrackingDownloadingIcon:(id)arg1 ;
-(void)setUseDarkLabels:(BOOL)arg1 ;
-(id)updateHandler;
-(void)_handleDidReplaceDownloadingIconNotification:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2 ;
-(void)_performUpdateHandler;
-(id)_iconForDisplayItem:(id)arg1 ;
-(void)invalidate;
-(void)_loadIconForDisplayItem:(id)arg1 ;
-(id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 showCanvasTitles:(BOOL)arg4 ;
-(BOOL)isUsingDarkLabels;
-(id)_computeHeaderItems;
-(void)_updateDisplayItemIcons;
-(void)dealloc;
@end

