/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBStarkBannerItem.h>

@protocol SBStarkNotificationBannerItemDelegate;
@class NCNotificationRequest;

@interface SBStarkNotificationBannerItem : SBStarkBannerItem {

	NCNotificationRequest* _request;
	id<SBStarkNotificationBannerItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBStarkNotificationBannerItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * request;                                        //@synthesize request=_request - In the implementation block
-(id<SBStarkNotificationBannerItemDelegate>)delegate;
-(void)setDelegate:(id<SBStarkNotificationBannerItemDelegate>)arg1 ;
-(id)timeZone;
-(id)title;
-(/*^block*/id)action;
-(id)initWithConfiguration:(id)arg1 ;
-(id)message;
-(void)setRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)request;
-(id)_title;
-(id)iconImages;
-(id)appName;
-(BOOL)isSticky;
-(id)subTitle;
-(id)_subTitle;
-(id)subActions;
-(id)_allActions;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(id)_closeAction;
-(id)_supplementaryActions;
-(long long)defaultActionType;
-(id)initWithRequest:(id)arg1 configuration:(id)arg2 ;
-(BOOL)matchesContext:(id)arg1 ;
-(BOOL)_supportsSubActions;
-(void)updateRequestToInstance:(id)arg1 ;
-(id)sourceDate;
-(BOOL)isSourceDateAllDay;
@end

