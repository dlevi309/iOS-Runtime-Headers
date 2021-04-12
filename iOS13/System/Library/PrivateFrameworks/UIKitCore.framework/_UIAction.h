/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIActionGroupable.h>

@class NSString, UIImage;

@interface _UIAction : NSObject <_UIActionGroupable> {

	unsigned long long _options;
	long long _type;
	NSString* _title;
	UIImage* _image;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(unsigned long long)options;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)_initWithWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)performAction;
-(id)_apiRepresentation;
@end

