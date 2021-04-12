/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSceneViewPresentationConfiguring.h>
#import <libobjc.A.dylib/SBSceneViewControlling.h>

@protocol SBScenePlaceholderContentContext;
@class SBSceneHandle, UIView, SBSceneView, NSString;

@interface SBSceneViewController : UIViewController <SBSceneViewPresentationConfiguring, SBSceneViewControlling> {

	SBSceneHandle* _sceneHandle;
	long long _displayMode;
	long long _contentOrientation;
	id<SBScenePlaceholderContentContext> _placeholderContentContext;
	UIView* _customContentView;
	SBSceneView* _sceneView;
	CGSize _contentReferenceSize;

}

@property (getter=_sceneView,nonatomic,readonly) SBSceneView * sceneView;                                 //@synthesize sceneView=_sceneView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSceneHandle * sceneHandle;                                               //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) long long displayMode;                                                     //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;              //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                                  //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,readonly) CGSize contentReferenceSize;                                               //@synthesize contentReferenceSize=_contentReferenceSize - In the implementation block
@property (nonatomic,readonly) long long contentInterfaceOrientation;                                     //@synthesize contentOrientation=_contentOrientation - In the implementation block
-(id)newSnapshotView;
-(long long)sceneViewPresentationPriority:(id)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg1 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(long long)displayMode;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(id)initWithSceneHandle:(id)arg1 ;
-(UIView *)customContentView;
-(id)newSnapshot;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(long long)contentInterfaceOrientation;
-(SBSceneHandle *)sceneHandle;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(CGSize)contentReferenceSize;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_sceneView;
-(void)_setSceneView:(id)arg1 ;
@end

