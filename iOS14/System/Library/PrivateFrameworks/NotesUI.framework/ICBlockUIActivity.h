/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity {

	/*^block*/id _block;
	NSString* _title;
	UIImage* _image;
	NSString* _type;

}

@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * type;               //@synthesize type=_type - In the implementation block
-(id)block;
-(void)setImage:(UIImage *)arg1 ;
-(id)activityType;
-(id)init;
-(void)performActivity;
-(void)setBlock:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(UIImage *)image;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)activityCategory;
-(NSString *)type;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(NSString *)title;
-(id)activityImage;
-(id)initWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(/*^block*/id)arg3 ;
@end

