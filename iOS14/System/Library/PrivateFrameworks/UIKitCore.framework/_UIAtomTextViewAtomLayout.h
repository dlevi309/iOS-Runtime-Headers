/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(void)setEnabled:(BOOL)arg1;
-(void)setSelectionStyle:(long long)arg1;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
-(BOOL)isEnabled;
-(long long)selectionStyle;

@end

