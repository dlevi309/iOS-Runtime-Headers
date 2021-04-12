/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_descriptionStringForReason:(long long)arg1 ;
-(NSMutableSet *)_reasonsForDisablingPreview;
-(void)setDelegate:(id<CAMDisabledPreviewControllerDelegate>)arg1 ;
-(BOOL)isPreviewDisabled;
-(void)addDisabledPreviewReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)removeDisabledPreviewReason:(long long)arg1 ;
@end

