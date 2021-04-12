/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <ShareSheet/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;
@interface MessageMarkupDocumentActivity : UIActivity {

	id<ContentRepresentationHandlingDelegate> _delegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<ContentRepresentationHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long context;                                                      //@synthesize context=_context - In the implementation block
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(long long)context;
-(id)activityType;
-(void)setContext:(long long)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 ;
@end

