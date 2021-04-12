/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <ShareSheet/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {

	UIPrintPageRenderer* _pageRenderer;

}

@property (nonatomic,retain) UIPrintPageRenderer * pageRenderer;              //@synthesize pageRenderer=_pageRenderer - In the implementation block
-(id)activityType;
-(void)performActivity;
-(UIPrintPageRenderer *)pageRenderer;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)initWithPrintPageRenderer:(id)arg1 ;
-(void)setPageRenderer:(UIPrintPageRenderer *)arg1 ;
@end

