/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIDragInteraction.h>

@protocol SBAppPlatterDragSourceViewProviding;
@class UIGestureRecognizer, NSString;

@interface SBWindowDragInteraction : UIDragInteraction {

	UIGestureRecognizer* _gestureRecognizer;
	id<SBAppPlatterDragSourceViewProviding> _sourceViewProvider;
	NSString* _sceneIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,__weak,readonly) UIGestureRecognizer * gestureRecognizer;                               //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBAppPlatterDragSourceViewProviding> sourceViewProvider;              //@synthesize sourceViewProvider=_sourceViewProvider - In the implementation block
@property (nonatomic,retain) NSString * sceneIdentifier;                                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(CGPoint)_locationInView:(id)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)setSourceViewProvider:(id<SBAppPlatterDragSourceViewProviding>)arg1 ;
-(id<SBAppPlatterDragSourceViewProviding>)sourceViewProvider;
@end

