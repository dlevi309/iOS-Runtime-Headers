/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

@class UIView;


@protocol PLPlatter <PLContentSizeManaging>
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@required
-(UIView *)customContentView;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1;
-(void)setBackgroundBlurred:(BOOL)arg1;
-(BOOL)isBackgroundBlurred;

@end

