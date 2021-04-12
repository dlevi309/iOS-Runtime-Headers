/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                         //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)setPlacements:(NSArray *)arg1 ;
-(NSArray *)placements;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(BOOL)supportsIndirectPointerTouchActions;
@end

