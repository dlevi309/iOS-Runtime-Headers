/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(NSArray *)activityItems;
-(id)performBlock;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setActivityItems:(NSArray *)arg1 ;
-(id)activityImage;
-(id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(/*^block*/id)arg4 ;
@end

