/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_color;
-(void)setImage:(id)arg1;
-(void)setTitle:(id)arg1;
-(UIImage *)image;
-(void)_setColor:(id)arg1;
-(id)_effectiveColor;
-(void)setIdentifier:(id)arg1;
-(void)setStyle:(long long)arg1;
-(NSString *)identifier;
-(id)_effectiveImage;
-(long long)style;
-(NSString *)title;

@end

