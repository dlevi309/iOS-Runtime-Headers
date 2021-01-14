/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	long long _alignment;

}

@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) BOOL canOverflowItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aligningLayoutWithAlignment:(long long)arg1 ;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(BOOL)canOverflowItems;
@end

