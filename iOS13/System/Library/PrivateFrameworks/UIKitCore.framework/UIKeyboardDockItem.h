/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UIImage, UIKeyboardDockItemButton, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface UIKeyboardDockItem : NSObject {

	NSString* _identifier;
	NSString* _imageName;
	UIImage* _image;
	UIKeyboardDockItemButton* _button;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _touchDownPoint;

}

@property (nonatomic,retain) UIKeyboardDockItemButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) CGPoint touchDownPoint;                                                 //@synthesize touchDownPoint=_touchDownPoint - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIKeyboardDockItemButton * view; 
+(id)_standardGlyphColor;
+(id)_darkStyleGlyphColor;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIKeyboardDockItemButton *)view;
-(UIKeyboardDockItemButton *)button;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setButton:(UIKeyboardDockItemButton *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(id)imageWithRenderConfig:(id)arg1 ;
-(id)initWithImageName:(id)arg1 identifier:(id)arg2 ;
-(NSString *)imageName;
-(CGPoint)touchDownPoint;
-(void)setTouchDownPoint:(CGPoint)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

