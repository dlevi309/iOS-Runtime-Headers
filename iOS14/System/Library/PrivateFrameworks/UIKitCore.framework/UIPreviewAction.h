/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)_checkmarkImage;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithPreviewMenuItem:(id)arg1 ;
-(id)_color;
-(void)setImage:(UIImage *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)_setColor:(id)arg1 ;
-(id)_effectiveColor;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)identifier;
-(id)_effectiveImage;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

