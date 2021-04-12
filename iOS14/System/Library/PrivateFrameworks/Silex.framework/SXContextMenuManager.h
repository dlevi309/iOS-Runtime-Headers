/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/SXContextMenuManager.h>

@protocol SXContextMenuManager <NSObject>
@property (assign,nonatomic,__weak) id<SXContextMenuManagerDelegate> delegate; 
@required
-(id<SXContextMenuManagerDelegate>)delegate;
-(void)registerOnView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)addProvider:(id)arg1;

@end


@protocol SXContextMenuManagerDelegate, SXContextMenuProviding;
@class SXViewport, NSMutableArray, UITargetedPreview, NSString;

@interface SXContextMenuManager : NSObject <UIContextMenuInteractionDelegate, SXContextMenuManager> {

	id<SXContextMenuManagerDelegate> delegate;
	SXViewport* _viewport;
	NSMutableArray* _providers;
	id<SXContextMenuProviding> _activeProvider;
	UITargetedPreview* _activePreview;

}

@property (nonatomic,readonly) SXViewport * viewport;                                       //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableArray * providers;                                  //@synthesize providers=_providers - In the implementation block
@property (nonatomic,retain) id<SXContextMenuProviding> activeProvider;                     //@synthesize activeProvider=_activeProvider - In the implementation block
@property (nonatomic,retain) UITargetedPreview * activePreview;                             //@synthesize activePreview=_activePreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXContextMenuManagerDelegate> delegate; 
-(id)initWithViewport:(id)arg1 ;
-(SXViewport *)viewport;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(NSMutableArray *)providers;
-(void)setActivePreview:(UITargetedPreview *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id<SXContextMenuManagerDelegate>)delegate;
-(void)registerOnView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setDelegate:(id<SXContextMenuManagerDelegate>)arg1 ;
-(id<SXContextMenuProviding>)activeProvider;
-(void)didEndPreviewing;
-(void)addProvider:(id)arg1 ;
-(void)willStartPreviewing;
-(void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(BOOL)shouldStartPreviewing;
-(UITargetedPreview *)activePreview;
-(void)contextMenuInteractionWillPresent:(id)arg1 ;
-(void)setActiveProvider:(id<SXContextMenuProviding>)arg1 ;
@end

