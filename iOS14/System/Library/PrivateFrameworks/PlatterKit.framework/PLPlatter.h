/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

@class UIView;


@protocol PLPlatter <PLContentSizeManaging>
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@required
-(void)setBackgroundBlurred:(BOOL)arg1;
-(BOOL)isBackgroundBlurred;
-(void)setHasShadow:(BOOL)arg1;
-(UIView *)customContentView;
-(BOOL)hasShadow;

@end

