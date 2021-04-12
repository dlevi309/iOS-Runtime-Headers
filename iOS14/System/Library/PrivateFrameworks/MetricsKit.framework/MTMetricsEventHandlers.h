/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTFlexibleEventHandler, MTClickEventHandler, MTEnterEventHandler, MTExitEventHandler, MTImpressionsEventHandler, MTPageEventHandler, MTSearchEventHandler, MTAccountEventHandler, MTDialogEventHandler, MTMediaEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers {

	MTFlexibleEventHandler* _flexible;

}

@property (nonatomic,readonly) MTClickEventHandler * click; 
@property (nonatomic,readonly) MTEnterEventHandler * enter; 
@property (nonatomic,readonly) MTExitEventHandler * exit; 
@property (nonatomic,readonly) MTFlexibleEventHandler * flexible;                    //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) MTImpressionsEventHandler * impressions; 
@property (nonatomic,readonly) MTPageEventHandler * page; 
@property (nonatomic,readonly) MTSearchEventHandler * search; 
@property (nonatomic,readonly) MTAccountEventHandler * account; 
@property (nonatomic,readonly) MTDialogEventHandler * dialog; 
@property (nonatomic,readonly) MTMediaEventHandler * media; 
-(MTExitEventHandler *)exit;
-(MTAccountEventHandler *)account;
-(MTPageEventHandler *)page;
-(MTDialogEventHandler *)dialog;
-(MTMediaEventHandler *)media;
-(MTImpressionsEventHandler *)impressions;
-(MTClickEventHandler *)click;
-(MTSearchEventHandler *)search;
-(MTEnterEventHandler *)enter;
-(MTFlexibleEventHandler *)flexible;
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
@end

