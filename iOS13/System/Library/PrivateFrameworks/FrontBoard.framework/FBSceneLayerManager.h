/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSOrderedSet, NSHashTable;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {

	NSString* _identifier;
	NSOrderedSet* _layers;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layers;                   //@synthesize layers=_layers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSOrderedSet *)layers;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)_setLayers:(id)arg1 ;
-(void)_observer_willStartTrackingLayers;
-(void)_observer_didStartTrackingLayers;
-(void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_observer_didStopTrackingLayers;
-(id)layerWithContextID:(unsigned)arg1 ;
@end

