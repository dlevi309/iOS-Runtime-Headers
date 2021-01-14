/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

