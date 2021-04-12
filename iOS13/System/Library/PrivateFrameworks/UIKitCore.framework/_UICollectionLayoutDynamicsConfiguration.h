/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutDynamicsConfiguration.h>
@class NSArray;


@protocol _UICollectionLayoutDynamicsConfiguration <NSObject>
@property (nonatomic,readonly) NSArray * dynamicItems; 
@property (nonatomic,readonly) CGRect previousVisibleBounds; 
@property (nonatomic,readonly) CGRect currentVisibleBounds; 
@required
-(id)behaviorsForItem:(id)arg1;
-(void)setBehaviors:(id)arg1 forItem:(id)arg2;
-(NSArray *)dynamicItems;
-(CGRect)previousVisibleBounds;
-(CGRect)currentVisibleBounds;

@end


@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface _UICollectionLayoutDynamicsConfiguration : NSObject <_UICollectionLayoutDynamicsConfiguration> {

	NSMutableArray* _dirtyItems;
	NSArray* _items;
	NSMutableDictionary* _behaviorDict;
	CGRect _previousVisibleBounds;
	CGRect _currentVisibleBounds;

}

@property (nonatomic,retain) NSMutableDictionary * behaviorDict;              //@synthesize behaviorDict=_behaviorDict - In the implementation block
@property (nonatomic,retain) NSArray * dynamicItems; 
@property (assign,nonatomic) CGRect previousVisibleBounds;                    //@synthesize previousVisibleBounds=_previousVisibleBounds - In the implementation block
@property (assign,nonatomic) CGRect currentVisibleBounds;                     //@synthesize currentVisibleBounds=_currentVisibleBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_reset;
-(void)setCurrentVisibleBounds:(CGRect)arg1 ;
-(void)setPreviousVisibleBounds:(CGRect)arg1 ;
-(void)setDynamicItems:(NSArray *)arg1 ;
-(void)_setBehaviors:(id)arg1 forItem:(id)arg2 ;
-(id)_dirtyItems;
-(id)behaviorsForItem:(id)arg1 ;
-(NSMutableDictionary *)behaviorDict;
-(void)setBehaviors:(id)arg1 forItem:(id)arg2 ;
-(NSArray *)dynamicItems;
-(CGRect)previousVisibleBounds;
-(CGRect)currentVisibleBounds;
-(void)setBehaviorDict:(NSMutableDictionary *)arg1 ;
@end

