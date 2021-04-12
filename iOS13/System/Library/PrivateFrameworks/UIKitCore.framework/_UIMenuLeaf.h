/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@required
-(unsigned long long)attributes;
-(long long)state;
-(void)setAttributes:(unsigned long long)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setState:(long long)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(NSString *)discoverabilityTitle;
-(void)setDiscoverabilityTitle:(id)arg1;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(void)_performWithTarget:(id)arg1;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(id)_leafAlternates;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;

@end

