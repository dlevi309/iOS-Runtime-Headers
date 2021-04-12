/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIGestureRecognizer *)gestureRecognizer;
-(CGPoint)_locationInView:(id)arg1 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id<SBAppPlatterDragSourceViewProviding>)sourceViewProvider;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceViewProvider:(id<SBAppPlatterDragSourceViewProviding>)arg1 ;
@end

