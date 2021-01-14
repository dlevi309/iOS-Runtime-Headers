/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarIdentifier, NSString, NSSet, NSMutableArray;

@interface _UIStatusBarAnimation : NSObject <NSCopying, _UIStatusBarPrioritized> {

	BOOL _delaysAnimatingItems;
	BOOL _delaysDependentItems;
	BOOL _enabled;
	long long _priority;
	_UIStatusBarIdentifier* _displayItemIdentifier;
	NSString* _identifier;
	NSString* _exclusivityGroupIdentifier;
	long long _type;
	/*^block*/id _prepareBlock;
	NSSet* _delayedItemIdentifiers;
	NSSet* _delayedDisplayItemPlacements;
	NSMutableArray* _subAnimations;
	_UIStatusBarAnimation* _parentAnimation;
	/*^block*/id _animationBlock;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSMutableArray * subAnimations;                              //@synthesize subAnimations=_subAnimations - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarAnimation * parentAnimation;              //@synthesize parentAnimation=_parentAnimation - In the implementation block
@property (nonatomic,copy) id animationBlock;                                             //@synthesize animationBlock=_animationBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                         //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * effectiveDelayedItemIdentifiers; 
@property (nonatomic,copy) _UIStatusBarIdentifier * displayItemIdentifier;                //@synthesize displayItemIdentifier=_displayItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * exclusivityGroupIdentifier;                         //@synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier - In the implementation block
@property (nonatomic,copy) id prepareBlock;                                               //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (nonatomic,copy) NSSet * delayedItemIdentifiers;                                //@synthesize delayedItemIdentifiers=_delayedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * delayedDisplayItemPlacements;                          //@synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements - In the implementation block
@property (assign,nonatomic) BOOL delaysAnimatingItems;                                   //@synthesize delaysAnimatingItems=_delaysAnimatingItems - In the implementation block
@property (assign,nonatomic) BOOL delaysDependentItems;                                   //@synthesize delaysDependentItems=_delaysDependentItems - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
+(void)initialize;
+(id)animationWithBlock:(/*^block*/id)arg1 ;
+(void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2 ;
+(void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4 ;
+(void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg1 ;
-(void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 ;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)delaysAnimatingItems;
-(void)setDelayedItemIdentifiers:(NSSet *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSMutableArray *)subAnimations;
-(_UIStatusBarIdentifier *)displayItemIdentifier;
-(NSString *)exclusivityGroupIdentifier;
-(id)description;
-(void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2 ;
-(NSSet *)effectiveDelayedItemIdentifiers;
-(NSSet *)delayedDisplayItemPlacements;
-(NSMutableArray *)completionHandlers;
-(long long)type;
-(void)setDelaysDependentItems:(BOOL)arg1 ;
-(_UIStatusBarAnimation *)parentAnimation;
-(void)performForStatusBar:(id)arg1 ;
-(void)addTotalCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelaysAnimatingItems:(BOOL)arg1 ;
-(void)setParentAnimation:(_UIStatusBarAnimation *)arg1 ;
-(void)setDelayedDisplayItemPlacements:(NSSet *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)setDisplayItemIdentifier:(_UIStatusBarIdentifier *)arg1 ;
-(void)setExclusivityGroupIdentifier:(NSString *)arg1 ;
-(void)setSubAnimations:(NSMutableArray *)arg1 ;
-(void)setAnimationBlock:(id)arg1 ;
-(void)cancel;
-(long long)priority;
-(id)prepareBlock;
-(id)animationBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSSet *)delayedItemIdentifiers;
-(void)setPrepareBlock:(id)arg1 ;
-(BOOL)delaysDependentItems;
@end

