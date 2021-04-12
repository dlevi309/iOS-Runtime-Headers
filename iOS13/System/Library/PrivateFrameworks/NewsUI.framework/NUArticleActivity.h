/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage, NSArray;

@interface NUArticleActivity : UIActivity {

	NSString* _activityType;
	NSString* _activityTitle;
	UIImage* _activityImage;
	/*^block*/id _performBlock;
	NSArray* _activityItems;

}

@property (nonatomic,copy,readonly) id performBlock;               //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;              //@synthesize activityItems=_activityItems - In the implementation block
-(id)activityType;
-(id)performBlock;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(void)setActivityItems:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(/*^block*/id)arg4 ;
@end

