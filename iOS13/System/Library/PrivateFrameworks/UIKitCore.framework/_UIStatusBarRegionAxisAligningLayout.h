/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	long long _alignment;

}

@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverflowItems; 
+(id)aligningLayoutWithAlignment:(long long)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)canOverflowItems;
@end

