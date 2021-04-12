/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)activityType;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
@end

