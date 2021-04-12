/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)_isPlaceholderViewSelector;
-(UIView *)placeheldView;
-(UIView *)associatedView;
-(void)setFallbackView:(id)arg1;
-(void)setAssociatedView:(id)arg1;
-(BOOL)refreshPlaceholder;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(UIView *)fallbackView;

@end

