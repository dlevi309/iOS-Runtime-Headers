/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <ShareSheet/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {

	UIPrintPageRenderer* _pageRenderer;

}

@property (nonatomic,retain) UIPrintPageRenderer * pageRenderer;              //@synthesize pageRenderer=_pageRenderer - In the implementation block
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(UIPrintPageRenderer *)pageRenderer;
-(id)initWithPrintPageRenderer:(id)arg1 ;
-(void)setPageRenderer:(UIPrintPageRenderer *)arg1 ;
@end

