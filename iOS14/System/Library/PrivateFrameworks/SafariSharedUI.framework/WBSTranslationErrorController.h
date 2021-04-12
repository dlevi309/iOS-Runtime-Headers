/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSTranslationErrorControllerDelegate;
@class NSCountedSet, NSMutableSet;

@interface WBSTranslationErrorController : NSObject {

	NSCountedSet* _errorCounter;
	NSMutableSet* _errorKeysReachingThreshold;
	id<WBSTranslationErrorControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSTranslationErrorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WBSTranslationErrorControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSTranslationErrorControllerDelegate>)arg1 ;
-(void)invalidate;
-(id)_overriddenThresholdForError:(id)arg1 ;
-(void)addError:(id)arg1 ;
@end

