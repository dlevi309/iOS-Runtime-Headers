/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <ShareSheet/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;
@class NSURL;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	id<ContentRepresentationHandlingDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<ContentRepresentationHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(NSURL *)url;
-(id)activityType;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_cleanup;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 url:(id)arg3 ;
@end

