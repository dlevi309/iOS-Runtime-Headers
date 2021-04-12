/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivity.h>

@class UIDocumentInteractionController, NSArray;

@interface PMOpenInIMovieActivity : UIActivity {

	UIDocumentInteractionController* _documentInteractionController;
	NSArray* _activityItems;

}

@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;                                                      //@synthesize activityItems=_activityItems - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(void)performActivity;
-(void)setActivityItems:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(UIDocumentInteractionController *)documentInteractionController;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
@end

