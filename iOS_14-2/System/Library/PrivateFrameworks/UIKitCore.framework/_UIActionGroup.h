/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIActionGroupable.h>

@class NSArray, NSString, UIImage;

@interface _UIActionGroup : NSObject <_UIActionGroupable> {

	BOOL _inlineGroup;
	NSArray* _children;
	NSString* _title;
	UIImage* _image;
	long long _style;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * children;                      //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) BOOL inlineGroup;                      //@synthesize inlineGroup=_inlineGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4 ;
-(NSArray *)children;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(UIImage *)image;
-(id)_initWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4 ;
-(id)_apiRepresentation;
-(BOOL)inlineGroup;
-(long long)type;
-(void)setInlineGroup:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

