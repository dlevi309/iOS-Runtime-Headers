/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity {

	/*^block*/id _block;
	NSString* _title;
	UIImage* _image;
	NSString* _systemImageName;
	NSString* _customActivityType;

}

@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * systemImageName;                 //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,retain) NSString * customActivityType;              //@synthesize customActivityType=_customActivityType - In the implementation block
-(id)block;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)activityType;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSString *)systemImageName;
-(id)_systemImageName;
-(long long)activityCategory;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(void)setSystemImageName:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setCustomActivityType:(NSString *)arg1 ;
-(NSString *)customActivityType;
-(id)initWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(/*^block*/id)arg3 ;
@end

