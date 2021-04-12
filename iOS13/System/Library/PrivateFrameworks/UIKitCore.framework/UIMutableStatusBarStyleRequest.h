/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleRequest.h>

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) long long legibilityStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (assign,nonatomic) double foregroundAlpha; 
@property (nonatomic,retain) NSNumber * overrideHeight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
@end

