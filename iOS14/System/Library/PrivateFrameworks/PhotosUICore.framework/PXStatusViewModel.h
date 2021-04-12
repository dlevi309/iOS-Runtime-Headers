/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class NSString;

@interface PXStatusViewModel : PXObservable {

	NSString* _title;
	NSString* _message;
	NSString* _actionTitle;
	NSString* _actionConfirmationAlertTitle;
	NSString* _actionConfirmationAlertSubtitle;
	NSString* _actionConfirmationAlertButtonTitle;
	/*^block*/id _action;

}

@property (nonatomic,copy,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionTitle;                                     //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionConfirmationAlertTitle;                    //@synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionConfirmationAlertSubtitle;                 //@synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionConfirmationAlertButtonTitle;              //@synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) id action;                                                  //@synthesize action=_action - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setActionConfirmationAlertSubtitle:(NSString *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(NSString *)actionTitle;
-(NSString *)actionConfirmationAlertButtonTitle;
-(void)setActionConfirmationAlertTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertTitle;
-(id)description;
-(void)setActionConfirmationAlertButtonTitle:(NSString *)arg1 ;
-(NSString *)actionConfirmationAlertSubtitle;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSString *)title;
@end

