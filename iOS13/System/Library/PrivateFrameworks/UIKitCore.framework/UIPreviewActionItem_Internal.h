/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(long long)style;
-(void)setStyle:(long long)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(id)_color;
-(void)_setColor:(id)arg1;
-(id)_effectiveColor;
-(id)_effectiveImage;

@end

