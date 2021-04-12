/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <UIKit/UIFocusItem.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray, SKReachConstraints, GKEntity, SKScene, SKPhysicsBody, NSDictionary, UIView;

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem> {

	SKCNode* _skcNode;
	SKNode* _parent;
	NSMutableArray* _children;
	NSMutableArray* _actions;
	NSMutableDictionary* _keyedActions;
	NSMutableDictionary* _keyedSubSprites;
	NSMutableDictionary* _info;
	NSMutableDictionary* _attributeValues;
	NSString* _name;
	NSMutableDictionary* _userData;
	NSArray* _constraints;
	unsigned _version;
	BOOL _userInteractionEnabled;
	BOOL _performFullCapture;
	SKReachConstraints* _reachConstraints;
	long long _focusBehavior;
	GKEntity* _entity;

}

@property (assign,nonatomic,__weak) GKEntity * entity; 
@property (nonatomic,readonly) SCD_Struct_SK5 globalBoundingVerts; 
@property (nonatomic,readonly) SCD_Struct_SK5 globalAccumulatedBoundingVerts; 
@property (nonatomic,readonly) const CGPathRef outline; 
@property (assign,nonatomic) BOOL _showBounds; 
@property (nonatomic,readonly) CGRect _untransformedBounds; 
@property (nonatomic,readonly) CGSize _untransformedSize; 
@property (assign,nonatomic) CGPoint _anchorPoint; 
@property (nonatomic,readonly) CGSize _size; 
@property (nonatomic,retain) NSMutableDictionary * _info; 
@property (nonatomic,readonly) NSArray * _allActions; 
@property (nonatomic,readonly) shared_ptr<PKCAether>* _aether; 
@property (assign,nonatomic,__weak) GKEntity * entity;                                                 //@synthesize entity=_entity - In the implementation block
@property (assign) BOOL performFullCapture;                                                            //@synthesize performFullCapture=_performFullCapture - In the implementation block
@property (nonatomic,readonly) SKCNode* _backingNode; 
@property (assign,nonatomic) double xRotation; 
@property (assign,nonatomic) double yRotation; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) double zRotation; 
@property (assign,nonatomic) double xScale; 
@property (assign,nonatomic) double yScale; 
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double alpha; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) long long focusBehavior;                                                  //@synthesize focusBehavior=_focusBehavior - In the implementation block
@property (nonatomic,readonly) SKNode * parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SKScene * scene; 
@property (nonatomic,retain) SKPhysicsBody * physicsBody; 
@property (nonatomic,retain) NSMutableDictionary * userData;                                           //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) SKReachConstraints * reachConstraints;                                      //@synthesize reachConstraints=_reachConstraints - In the implementation block
@property (nonatomic,copy) NSArray * constraints; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
+(BOOL)supportsSecureCoding;
+(id)node;
+(id)nodeWithFileNamed:(id)arg1 ;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 ;
+(id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id*)arg3 ;
+(id)debugHierarchyChildGroupingID;
+(id)nodeFromCaptureData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)addChild:(id)arg1 ;
-(SKNode *)parent;
-(void)setParent:(SKNode *)arg1 ;
-(NSMutableDictionary *)_info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(NSArray *)constraints;
-(CGSize)_size;
-(void)_update:(double)arg1 ;
-(void)removeAllActions;
-(CGPoint)position;
-(BOOL)isPaused;
-(BOOL)needsUpdate;
-(BOOL)isHidden;
-(double)alpha;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(void)setScale:(double)arg1 ;
-(void)setEntity:(GKEntity *)arg1 ;
-(GKEntity *)entity;
-(void)setPosition:(CGPoint)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(NSArray *)children;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)removeChild:(id)arg1 ;
-(CGPoint)_anchorPoint;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(SKScene *)scene;
-(BOOL)isUserInteractionEnabled;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(id)containingView;
-(double)zPosition;
-(const CGPathRef)outline;
-(NSMutableDictionary *)userData;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
-(id)_descendants;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(BOOL)hasActions;
-(NSDictionary *)attributeValues;
-(BOOL)hasChildren;
-(void)setAttributeValues:(NSDictionary *)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFromParent;
-(BOOL)intersectsNode:(id)arg1 ;
-(void)setPhysicsBody:(SKPhysicsBody *)arg1 ;
-(SKPhysicsBody *)physicsBody;
-(CGRect)_untransformedBounds;
-(id)nodeAtPoint:(CGPoint)arg1 recursive:(BOOL)arg2 ;
-(void)runAction:(id)arg1 ;
-(shared_ptr<PKCAether>*)_aether;
-(id)physicsField;
-(long long)focusBehavior;
-(void)setFocusBehavior:(long long)arg1 ;
-(BOOL)_isEffectivelyHidden;
-(BOOL)_isEligibleForFocus;
-(void)removeActionForKey:(id)arg1 ;
-(id)childNodeWithName:(id)arg1 ;
-(id)_subnodeFromIndexPath:(id)arg1 ;
-(CGRect)_convertFrameToView:(id)arg1 ;
-(NSArray *)_allActions;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_backingNode;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)removeChildrenInArray:(id)arg1 ;
-(CGRect)calculateAccumulatedFrame;
-(void)_removeChild:(id)arg1 ;
-(void)_removeAction:(id)arg1 ;
-(void)enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromNode:(id)arg2 ;
-(double)zRotation;
-(CGPoint)convertPoint:(CGPoint)arg1 toNode:(id)arg2 ;
-(void)setZRotation:(double)arg1 ;
-(double)xScale;
-(double)yScale;
-(void)setXScale:(double)arg1 ;
-(void)setYScale:(double)arg1 ;
-(id)_descendantsWithPredicate:(/*^block*/id)arg1 ;
-(id)createDebugHierarchyVisualRepresentation;
-(CGPoint)convertPointFromParent:(CGPoint)arg1 ;
-(CGPoint)convertPointToParent:(CGPoint)arg1 ;
-(void)set_anchorPoint:(CGPoint)arg1 ;
-(void)setXRotation:(double)arg1 ;
-(void)setYRotation:(double)arg1 ;
-(double)xRotation;
-(double)yRotation;
-(SKReachConstraints *)reachConstraints;
-(void)runAction:(id)arg1 withKey:(id)arg2 ;
-(BOOL)performFullCapture;
-(id)_copyImageData;
-(void)setPerformFullCapture:(BOOL)arg1 ;
-(id)archiveToFile:(id)arg1 ;
-(void)debugPrint;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)_initAccessibility;
-(Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2 ;
-(void)setReachConstraints:(SKReachConstraints *)arg1 ;
-(void)_runAction:(id)arg1 ;
-(void)addChild:(id)arg1 withKey:(id)arg2 ;
-(void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 stopPointer:(BOOL*)arg3 ;
-(void)_processSearchTokens:(vector<Token, std::__1::allocator<Token> >*)arg1 visited:(set<SKNode *, std::__1::less<SKNode *>, std::__1::allocator<SKNode *> >*)arg2 usingBlock:(/*^block*/id)arg3 stopPointer:(BOOL*)arg4 ;
-(void)_descendantsToMutableArray:(id)arg1 ;
-(void)_descendantsWithPredicate:(/*^block*/id)arg1 toMutableArray:(id)arg2 ;
-(BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(CGSize)_untransformedSize;
-(void)moveToParent:(id)arg1 ;
-(BOOL)inParentHierarchy:(id)arg1 ;
-(void)removeChildAtIndex:(long long)arg1 ;
-(void)removeAllChildren;
-(void)_performCleanup;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)runAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)containsPoint:(CGPoint)arg1 withRadius:(double)arg2 ;
-(id)nodeAtPoint:(CGPoint)arg1 ;
-(id)nodesAtPoint:(CGPoint)arg1 ;
-(BOOL)hasUniformAlphaAndIsVisible;
-(SCD_Struct_SK5)globalBoundingVerts;
-(SCD_Struct_SK5)globalAccumulatedBoundingVerts;
-(void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2 ;
-(void)_debugPrint:(int)arg1 ;
-(id)childrenInRect:(CGRect)arg1 ;
-(id)createFullCaptureData;
-(void)_getWorldTransform:(float*)arg1 positionY:(float*)arg2 rotation:(float*)arg3 xScale:(float*)arg4 yScale:(float*)arg5 ;
-(void)_getBasePhysicsScale:(float*)arg1 yScale:(float*)arg2 ;
-(void)updatePhysicsPositionAndScaleFromSprite;
-(void)set_showBounds:(BOOL)arg1 ;
-(BOOL)_showBounds;
-(id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(BOOL)_pathFromPhysicsBodyToPoints:(1*)arg1 outSize:(unsigned long long*)arg2 ;
@end

