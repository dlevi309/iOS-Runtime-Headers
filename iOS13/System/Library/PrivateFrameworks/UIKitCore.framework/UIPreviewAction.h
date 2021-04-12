/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPreviewActionItem_Internal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIColor, UIImage;

@interface UIPreviewAction : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem> {

	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	UIColor* _color;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)_checkmarkImage;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithPreviewMenuItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(NSString *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)_color;
-(void)_setColor:(id)arg1 ;
-(id)_effectiveColor;
-(id)_effectiveImage;
@end

