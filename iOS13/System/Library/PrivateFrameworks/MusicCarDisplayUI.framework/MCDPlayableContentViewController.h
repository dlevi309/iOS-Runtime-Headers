/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MCDPCModel, MCDPCContainer, NSArray, NSString, NSOperationQueue;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {

	MCDPCModel* _model;
	MCDPCContainer* _rootContainer;
	NSArray* _stackToRebuild;
	BOOL _hasBrowsableContent;
	BOOL _hasSectionedContent;
	BOOL _hasLoaded;
	NSString* _bundleID;
	NSOperationQueue* _modelInvalidationQueue;

}

@property (nonatomic,retain) NSOperationQueue * modelInvalidationQueue;              //@synthesize modelInvalidationQueue=_modelInvalidationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)_setupView;
-(void)_modelDidInvalidate:(id)arg1 ;
-(void)_nowPlayingIdentifiersChanged:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 stack:(id)arg2 ;
-(void)_populateStack;
-(id)_createSectionedRootViewController;
-(id)_createRootViewController;
-(NSOperationQueue *)modelInvalidationQueue;
-(void)refreshNavigationStackForLaunch;
-(id)currentStack;
-(void)setModelInvalidationQueue:(NSOperationQueue *)arg1 ;
@end

