/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol NSObject, CSAccessoryStatusProviding, CSAccessoryStatusDelegate;
@interface CSAccessoryStatusObserver : NSObject {

	id<NSObject> _attachmentNotificationToken;
	id<NSObject> _detachmentNotificationToken;
	id<NSObject> _animationStatusNotificationToken;
	id<CSAccessoryStatusProviding> _statusProvider;
	id<CSAccessoryStatusDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAccessoryStatusDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSAccessoryStatusDelegate>)delegate;
-(void)setDelegate:(id<CSAccessoryStatusDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoverSheetContext:(id)arg1 ;
-(void)notifiedWithAccessoryAttached;
-(void)notifiedWithAccessoryDetached;
-(void)notifiedWithAccessoryAnimationStatusChanged;
@end

