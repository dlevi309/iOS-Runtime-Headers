/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMDisabledPreviewControllerDelegate;
@class NSMutableSet;

@interface CAMDisabledPreviewController : NSObject {

	id<CAMDisabledPreviewControllerDelegate> _delegate;
	NSMutableSet* __reasonsForDisablingPreview;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForDisablingPreview;                          //@synthesize _reasonsForDisablingPreview=__reasonsForDisablingPreview - In the implementation block
@property (assign,nonatomic,__weak) id<CAMDisabledPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPreviewDisabled,nonatomic,readonly) BOOL previewDisabled; 
-(id)init;
-(id<CAMDisabledPreviewControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMDisabledPreviewControllerDelegate>)arg1 ;
-(void)addDisabledPreviewReason:(long long)arg1 ;
-(void)removeDisabledPreviewReason:(long long)arg1 ;
-(BOOL)isPreviewDisabled;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(NSMutableSet *)_reasonsForDisablingPreview;
@end

