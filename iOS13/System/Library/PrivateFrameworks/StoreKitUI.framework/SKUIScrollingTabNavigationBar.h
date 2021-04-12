/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <iTunesStoreUI/SUNavigationBar.h>
#import <libobjc.A.dylib/SKUIPositionAdjusting.h>

@class NSString;

@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting> {

	UIOffset _positionOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIOffset positionOffset; 
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIOffset)positionOffset;
-(void)setPositionOffset:(UIOffset)arg1 ;
@end

