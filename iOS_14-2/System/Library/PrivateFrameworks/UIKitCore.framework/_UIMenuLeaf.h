/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@required
-(id)_leafKeyInput;
-(void)setImage:(id)arg1;
-(void)setDiscoverabilityTitle:(id)arg1;
-(NSString *)discoverabilityTitle;
-(void)setAttributes:(unsigned long long)arg1;
-(void)setTitle:(id)arg1;
-(BOOL)_isDefaultCommand;
-(UIImage *)image;
-(unsigned long long)attributes;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(long long)_leafKeyModifierFlags;
-(BOOL)requiresAuthenticatedInput;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)_performWithTarget:(id)arg1;
-(id)_leafAlternates;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
-(NSString *)title;

@end

