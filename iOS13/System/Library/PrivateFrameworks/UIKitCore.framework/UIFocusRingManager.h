/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIGeometryChangeObserver.h>

@class NSMutableDictionary, NSString;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver> {

	NSMutableDictionary* _focusRingStateForClient;

}

@property (nonatomic,retain) NSMutableDictionary * focusRingStateForClient;              //@synthesize focusRingStateForClient=_focusRingStateForClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
+(void)removeRingFromFocusItem:(id)arg1 ;
+(void)updateRingForFocusItem:(id)arg1 ;
+(void)moveRingToFocusItem:(id)arg1 ;
+(void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2 ;
+(void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2 ;
+(void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2 ;
+(id)_currentFocusItemForClient:(id)arg1 ;
+(Class)shapeLayerClassForClient:(id)arg1 ;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(NSMutableDictionary *)focusRingStateForClient;
-(void)setFocusRingStateForClient:(NSMutableDictionary *)arg1 ;
-(void)_removeActiveFocusLayersForClient:(id)arg1 ;
-(void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)addFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)_updateFocusLayerFrames;
-(id)activeFocusLayersForClient:(id)arg1 ;
-(id)activeFocusLayersToItemsForClient:(id)arg1 ;
-(id)_viewToAddFocusLayerForItem:(id)arg1 ;
@end

