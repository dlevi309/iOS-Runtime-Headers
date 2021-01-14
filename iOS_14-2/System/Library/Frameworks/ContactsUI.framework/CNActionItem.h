/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, UIImage;

@interface CNActionItem : NSObject {

	BOOL _disabled;
	NSString* _type;
	UIImage* _image;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(id)description;
-(NSString *)type;
-(id)initWithImage:(id)arg1 type:(id)arg2 ;
-(BOOL)disabled;
-(NSString *)title;
@end

