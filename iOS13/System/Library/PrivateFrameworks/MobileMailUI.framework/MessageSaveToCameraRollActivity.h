/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <ShareSheet/UISaveToCameraRollActivity.h>

@protocol ContentRepresentationHandlingDelegate;
@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity {

	id<ContentRepresentationHandlingDelegate> _delegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<ContentRepresentationHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long context;                                                      //@synthesize context=_context - In the implementation block
-(id)init;
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(long long)context;
-(id)activityType;
-(void)setContext:(long long)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)_beforeActivity;
-(void)_prepareWithActivityItems:(id)arg1 ;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 ;
@end

