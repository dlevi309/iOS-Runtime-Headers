/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIImage, UIColor;

@interface UIPreviewMenuItem : NSObject <NSCopying> {

	NSString* identifier;
	NSString* _title;
	/*^block*/id _handler;
	long long _style;
	NSArray* __subitems;
	UIImage* _image;
	UIColor* _color;

}

@property (nonatomic,copy) id handler;                                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (setter=_setSubitems:,getter=_subitems,nonatomic,copy) NSArray * _subitems;              //@synthesize _subitems=__subitems - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3 ;
+(id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)itemWithViewControllerPreviewAction:(id)arg1 ;
-(id)_color;
-(void)setImage:(UIImage *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)_subitems;
-(UIImage *)image;
-(void)_setColor:(id)arg1 ;
-(void)_setSubitems:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)identifier;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

