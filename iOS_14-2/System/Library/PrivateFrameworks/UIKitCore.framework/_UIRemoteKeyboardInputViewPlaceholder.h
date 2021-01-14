/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)setFixedSize:(CGSize)arg1;
-(void)setAssociatedView:(id)arg1;
-(BOOL)refreshPlaceholder;
-(void)setFallbackView:(id)arg1;
-(UIView *)fallbackView;
-(UIView *)associatedView;
-(UIView *)placeheldView;
-(CGSize)fixedSize;
-(void)_isPlaceholderViewSelector;

@end

