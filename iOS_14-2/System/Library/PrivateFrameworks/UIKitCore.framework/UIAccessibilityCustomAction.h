/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage, NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject {

	UIImage* _image;
	NSAttributedString* _attributedName;
	id _target;
	SEL _selector;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic,__weak) id target;                               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy) id actionHandler;                                 //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)setTarget:(id)arg1 ;
-(SEL)selector;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)setSelector:(SEL)arg1 ;
-(id)actionHandler;
-(id)initWithAttributedName:(id)arg1 image:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithAttributedName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(void)setActionHandler:(id)arg1 ;
-(UIImage *)image;
-(id)initWithName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithAttributedName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 image:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(NSAttributedString *)attributedName;
-(id)initWithName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)target;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
@end

