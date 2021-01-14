/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class SKScene, SKTransition, NSMapTable, NSMutableDictionary;

@interface SKRenderer : NSObject {

	BOOL _needsInitialUpdate;
	BOOL _disableInput;
	BOOL _hasRenderedForCurrentUpdate;
	double _currentTime;
	double _previousTime;
	SKCRenderer* _skcRenderer;
	SKScene* _scene;
	SKScene* _nextScene;
	SKTransition* _transition;
	CGRect _renderBounds;
	NSMapTable* _touchMap;
	NSMutableDictionary* _renderOptions;

}

@property (nonatomic,retain) SKScene * scene;                             //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) BOOL ignoresSiblingOrder; 
@property (assign,nonatomic) BOOL shouldCullNonVisibleNodes; 
@property (assign,nonatomic) BOOL showsDrawCount; 
@property (assign,nonatomic) BOOL showsNodeCount; 
@property (assign,nonatomic) BOOL showsQuadCount; 
@property (assign,nonatomic) BOOL showsPhysics; 
@property (assign,nonatomic) BOOL showsFields; 
+(id)rendererWithDevice:(id)arg1 ;
-(SKScene *)scene;
-(void)_update:(double)arg1 ;
-(void)setScene:(SKScene *)arg1 ;
-(void)dealloc;
-(void)_initialize;
-(void)updateAtTime:(double)arg1 ;
-(void)setIgnoresSiblingOrder:(BOOL)arg1 ;
-(void)setShowsNodeCount:(BOOL)arg1 ;
-(void)setShowsDrawCount:(BOOL)arg1 ;
-(id)_getOptions;
-(id)initWithSKCRenderer:(SKCRenderer*)arg1 ;
-(void)setShowsQuadCount:(BOOL)arg1 ;
-(void)setShowsPhysics:(BOOL)arg1 ;
-(void)setShowsFields:(BOOL)arg1 ;
-(BOOL)ignoresSiblingOrder;
-(BOOL)showsNodeCount;
-(BOOL)showsQuadCount;
-(BOOL)showsDrawCount;
-(BOOL)showsPhysics;
-(BOOL)showsFields;
-(void)_notifyWillRenderContent;
-(void)renderWithViewport:(CGRect)arg1 renderCommandEncoder:(id)arg2 renderPassDescriptor:(id)arg3 commandQueue:(id)arg4 ;
-(void)renderWithViewport:(CGRect)arg1 commandBuffer:(id)arg2 renderPassDescriptor:(id)arg3 ;
-(void)setShouldCullNonVisibleNodes:(BOOL)arg1 ;
-(BOOL)shouldCullNonVisibleNodes;
@end

