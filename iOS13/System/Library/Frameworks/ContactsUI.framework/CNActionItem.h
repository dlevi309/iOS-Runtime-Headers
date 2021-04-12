/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)type;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 type:(id)arg2 ;
@end

