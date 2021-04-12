/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIActionGroupable.h>

@class NSString, UIImage;

@interface _UIAction : NSObject <_UIActionGroupable> {

	BOOL _requiresAuthenticatedInput;
	unsigned long long _options;
	long long _type;
	NSString* _title;
	UIImage* _image;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthenticatedInput;              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (assign,nonatomic) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)performAction;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)options;
-(void)setType:(long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(UIImage *)image;
-(id)_initWithWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)_apiRepresentation;
-(BOOL)requiresAuthenticatedInput;
-(long long)type;
-(void)setRequiresAuthenticatedInput:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

