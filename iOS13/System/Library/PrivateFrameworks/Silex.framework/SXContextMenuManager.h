/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/SXContextMenuManager.h>

@protocol SXContextMenuManager <NSObject>
@property (assign,nonatomic,__weak) id<SXContextMenuManagerDelegate> delegate; 
@required
-(id<SXContextMenuManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)addProvider:(id)arg1;
-(void)registerOnView:(id)arg1;

@end


@protocol SXContextMenuManagerDelegate, SXContextMenuProviding;
@class SXViewport, NSMutableArray, NSString;

@interface SXContextMenuManager : NSObject <UIContextMenuInteractionDelegate, SXContextMenuManager> {

	id<SXContextMenuManagerDelegate> delegate;
	SXViewport* _viewport;
	NSMutableArray* _providers;
	id<SXContextMenuProviding> _activeProvider;

}

@property (nonatomic,readonly) SXViewport * viewport;                                       //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableArray * providers;                                  //@synthesize providers=_providers - In the implementation block
@property (nonatomic,retain) id<SXContextMenuProviding> activeProvider;                     //@synthesize activeProvider=_activeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXContextMenuManagerDelegate> delegate; 
-(id<SXContextMenuManagerDelegate>)delegate;
-(void)setDelegate:(id<SXContextMenuManagerDelegate>)arg1 ;
-(SXViewport *)viewport;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)contextMenuInteractionWillPresent:(id)arg1 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)addProvider:(id)arg1 ;
-(NSMutableArray *)providers;
-(void)registerOnView:(id)arg1 ;
-(id)initWithViewport:(id)arg1 ;
-(BOOL)shouldStartPreviewing;
-(void)setActiveProvider:(id<SXContextMenuProviding>)arg1 ;
-(id<SXContextMenuProviding>)activeProvider;
-(void)willStartPreviewing;
-(void)didEndPreviewing;
@end

