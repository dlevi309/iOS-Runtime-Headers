/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(NSArray *)activityItems;
-(void)activityDidFinish:(BOOL)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)activityTitle;
-(void)setActivityItems:(NSArray *)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
@end

