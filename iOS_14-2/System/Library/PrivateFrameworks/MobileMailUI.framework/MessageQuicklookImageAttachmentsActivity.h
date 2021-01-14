/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_cleanup;
-(id)activityType;
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)performActivity;
-(NSURL *)url;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 url:(id)arg3 ;
@end

