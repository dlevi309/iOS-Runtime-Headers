/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity {

	/*^block*/id _block;
	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
-(id)block;
-(void)setImage:(UIImage *)arg1 ;
-(id)activityType;
-(void)performActivity;
-(void)setBlock:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(NSString *)title;
-(id)activityImage;
@end

