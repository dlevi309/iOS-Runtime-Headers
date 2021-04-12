/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTBaseEventDataProvider, MTClickEventHandler, MTEnterEventHandler, MTExitEventHandler, MTImpressionsEventHandler, MTPageEventHandler, MTFlexibleEventHandler, MTSearchEventHandler, MTAccountEventHandler, MTDialogEventHandler, MTMediaEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers {

	MTBaseEventDataProvider* _base;
	MTClickEventHandler* _click;
	MTEnterEventHandler* _enter;
	MTExitEventHandler* _exit;
	MTImpressionsEventHandler* _impressions;
	MTPageEventHandler* _page;
	MTFlexibleEventHandler* _flexible;
	MTSearchEventHandler* _search;
	MTAccountEventHandler* _account;
	MTDialogEventHandler* _dialog;
	MTMediaEventHandler* _media;

}

@property (nonatomic,readonly) MTClickEventHandler * click;                          //@synthesize click=_click - In the implementation block
@property (nonatomic,readonly) MTEnterEventHandler * enter;                          //@synthesize enter=_enter - In the implementation block
@property (nonatomic,readonly) MTExitEventHandler * exit;                            //@synthesize exit=_exit - In the implementation block
@property (nonatomic,readonly) MTFlexibleEventHandler * flexible;                    //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) MTImpressionsEventHandler * impressions;              //@synthesize impressions=_impressions - In the implementation block
@property (nonatomic,readonly) MTPageEventHandler * page;                            //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) MTSearchEventHandler * search;                        //@synthesize search=_search - In the implementation block
@property (nonatomic,readonly) MTAccountEventHandler * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MTDialogEventHandler * dialog;                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) MTMediaEventHandler * media;                          //@synthesize media=_media - In the implementation block
-(MTExitEventHandler *)exit;
-(MTAccountEventHandler *)account;
-(MTPageEventHandler *)page;
-(void)setBase:(id)arg1 ;
-(id)base;
-(MTSearchEventHandler *)search;
-(MTMediaEventHandler *)media;
-(MTClickEventHandler *)click;
-(MTDialogEventHandler *)dialog;
-(MTImpressionsEventHandler *)impressions;
-(MTFlexibleEventHandler *)flexible;
-(MTEnterEventHandler *)enter;
@end

