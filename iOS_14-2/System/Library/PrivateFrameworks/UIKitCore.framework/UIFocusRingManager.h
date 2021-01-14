/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
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
+(void)removeRingFromFocusItem:(id)arg1 ;
+(BOOL)focusRingAvailable;
+(void)_removeActiveFocusLayers;
+(void)moveRingToFocusItem:(id)arg1 ;
+(Class)shapeLayerClassForItem:(id)arg1 client:(id)arg2 ;
+(void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2 ;
+(void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2 ;
+(void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2 ;
+(id)manager;
+(void)_updateActiveFocusLayers;
+(id)_currentFocusItemForClient:(id)arg1 ;
+(void)updateRingForFocusItem:(id)arg1 ;
-(id)_viewToAddFocusLayerForItem:(id)arg1 ;
-(void)_removeActiveFocusLayersForClient:(id)arg1 ;
-(void)addFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(id)activeFocusLayersForClient:(id)arg1 ;
-(void)_addFocusLayer:(id)arg1 toView:(id)arg2 forItem:(id)arg3 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(NSString *)description;
-(long long)_insertionIndexOfFocusLayerForFocusItem:(id)arg1 ;
-(void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)setFocusRingStateForClient:(NSMutableDictionary *)arg1 ;
-(id)activeFocusLayersToItemsForClient:(id)arg1 ;
-(NSMutableDictionary *)focusRingStateForClient;
-(void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2 ;
-(void)_updateFocusLayerFrames;
@end

