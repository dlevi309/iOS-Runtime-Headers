/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIInterfaceActionPresenting;
@class UIView, UIViewController, NSString, UIImage, NSPointerArray, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIColor;

@interface UIInterfaceAction : NSObject <NSCopying> {

	BOOL _enabled;
	BOOL _preferred;
	BOOL _focused;
	UIView* _customContentView;
	long long _type;
	UIViewController* _customContentViewController;
	NSString* _title;
	long long _titleAlignment;
	NSString* _classificationTitle;
	UIImage* _leadingImage;
	UIImage* _trailingImage;
	/*^block*/id _handler;
	NSPointerArray* _weakDisplayPropertyObservers;
	UIInterfaceActionRepresentationView* __visualRepresentation;
	id<_UIInterfaceActionPresenting> __presentingController;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIColor* _titleTextColor;
	UIColor* _imageTintColor;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,retain) UIViewController * customContentViewController;                                                                   //@synthesize customContentViewController=_customContentViewController - In the implementation block
@property (nonatomic,copy) id handler;                                                                                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long type;                                                                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                                  //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) long long _typeForDeterminingViewRepresentation; 
@property (nonatomic,readonly) UIView * customContentView;                                                                                     //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,setter=_setVisualRepresentation:,nonatomic,__weak) UIInterfaceActionRepresentationView * _visualRepresentation;              //@synthesize _visualRepresentation=__visualRepresentation - In the implementation block
@property (assign,setter=_setPresentingController:,nonatomic,__weak) id<_UIInterfaceActionPresenting> _presentingController;                   //@synthesize _presentingController=__presentingController - In the implementation block
@property (assign,nonatomic) CGSize leadingImageLayoutSize;                                                                                    //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (assign,nonatomic) CGSize trailingImageLayoutSize;                                                                                   //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (assign,setter=_setIsPreferred:,getter=_isPreferred,nonatomic) BOOL preferred;                                                       //@synthesize preferred=_preferred - In the implementation block
@property (assign,setter=_setIsFocused:,getter=_isFocused,nonatomic) BOOL focused;                                                             //@synthesize focused=_focused - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (setter=_setTitleTextColor:,getter=_titleTextColor,nonatomic,retain) UIColor * titleTextColor;                                       //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (setter=_setImageTintColor:,getter=_imageTintColor,nonatomic,retain) UIColor * imageTintColor;                                       //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long titleAlignment;                                                                                         //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (nonatomic,copy) NSString * classificationTitle;                                                                                     //@synthesize classificationTitle=_classificationTitle - In the implementation block
@property (nonatomic,retain) UIImage * leadingImage;                                                                                           //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIImage * trailingImage;                                                                                          //@synthesize trailingImage=_trailingImage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                    //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)changedProperties:(id)arg1 containsAny:(id)arg2 ;
+(id)actionWithCustomContentViewController:(id)arg1 ;
+(id)actionWithCustomContentView:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)arg1 ;
+(id)_observableDisplayProperties;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)_titleTextColor;
-(long long)_typeForDeterminingViewRepresentation;
-(id)_imageTintColor;
-(BOOL)_isPreferred;
-(BOOL)_isFocused;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(UIViewController *)customContentViewController;
-(id<_UIInterfaceActionPresenting>)_presentingController;
-(void)_setVisualStyle:(id)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(void)setTrailingImage:(UIImage *)arg1 ;
-(UIView *)customContentView;
-(void)_setIsPreferred:(BOOL)arg1 ;
-(void)_setIsFocused:(BOOL)arg1 ;
-(void)_setTitleTextColor:(id)arg1 ;
-(void)_setImageTintColor:(id)arg1 ;
-(CGSize)_layoutSizeForImageProperty:(id)arg1 ;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)leadingImageLayoutSize;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)trailingImageLayoutSize;
-(void)_invokeHandlerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_addActionDisplayPropertyObserver:(id)arg1 ;
-(void)_removeActionDisplayPropertyObserver:(id)arg1 ;
-(void)setCustomContentViewController:(UIViewController *)arg1 ;
-(long long)titleAlignment;
-(NSString *)classificationTitle;
-(void)setClassificationTitle:(NSString *)arg1 ;
-(UIImage *)leadingImage;
-(UIImage *)trailingImage;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(UIInterfaceActionRepresentationView *)_visualRepresentation;
-(void)_setVisualRepresentation:(id)arg1 ;
-(void)_setPresentingController:(id)arg1 ;
-(id)_visualStyle;
@end

