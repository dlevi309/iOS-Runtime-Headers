/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)_setupView;
-(NSString *)bundleID;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
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

