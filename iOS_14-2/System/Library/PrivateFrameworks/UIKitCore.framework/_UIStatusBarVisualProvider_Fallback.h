/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, NSArray, NSString;

@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider> {

	_UIStatusBar* _statusBar;
	NSArray* _placements;

}

@property (nonatomic,retain) NSArray * placements;                                    //@synthesize placements=_placements - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                         //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setPlacements:(NSArray *)arg1 ;
-(NSArray *)placements;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(BOOL)supportsIndirectPointerTouchActions;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
@end

