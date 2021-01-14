/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSOrderedSet, NSHashTable, FBScene;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {

	NSString* _identifier;
	NSOrderedSet* _layers;
	NSHashTable* _observers;
	FBScene* _scene;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) FBScene * scene;                  //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layers;                   //@synthesize layers=_layers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScene *)scene;
-(id)_initWithScene:(id)arg1 ;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(void)_setLayers:(id)arg1 ;
-(NSOrderedSet *)layers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)layerWithContextID:(unsigned)arg1 ;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)_observer_sceneLayerManagerDidUpdateLayers;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_observer_didStopTrackingLayers;
-(void)_observer_didStartTrackingLayers;
@end

