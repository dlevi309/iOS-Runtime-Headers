/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityType;
-(id)init;
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)prepareWithActivityItems:(id)arg1 ;
-(long long)context;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(id)_beforeActivity;
-(id)activityImage;
-(void)setContext:(long long)arg1 ;
-(void)_prepareWithActivityItems:(id)arg1 ;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 ;
@end

