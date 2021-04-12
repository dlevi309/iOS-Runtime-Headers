/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString, NSDictionary, IKAppContext;

@interface VUIActionCommerceTransaction : VUIAction {

	NSString* _commerceActionRef;
	NSDictionary* _contextData;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) NSString * commerceActionRef;                  //@synthesize commerceActionRef=_commerceActionRef - In the implementation block
@property (nonatomic,copy) NSDictionary * contextData;                      //@synthesize contextData=_contextData - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
+(BOOL)isTransactionInProgressForBuyParams:(id)arg1 ;
+(id)extractSalableAdamIDFromBuyParams:(id)arg1 ;
+(void)displayConfirmationNotificationWithTitle:(id)arg1 andBody:(id)arg2 forChannelName:(id)arg3 ;
+(id)_extractCanonicalIDFromTransactionOffer:(id)arg1 ;
+(id)_skuDownloadKind:(long long)arg1 ;
+(void)_addTransaction:(id)arg1 forBuyParams:(id)arg2 ;
+(void)_saveInterruptedPurchaseTransactionContextInfo:(id)arg1 canonicalID:(id)arg2 error:(id)arg3 ;
+(void)_removeTransactionForBuyParams:(id)arg1 ;
-(void)setContextData:(NSDictionary *)arg1 ;
-(NSDictionary *)contextData;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3 ;
-(void)_postPurchaseNotification:(id)arg1 error:(id)arg2 ;
-(void)setCommerceActionRef:(NSString *)arg1 ;
-(void)_startPurchaseFlowForOffer:(id)arg1 playWhenDone:(BOOL)arg2 appContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_startSubscribeFlowForOffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_preflightManagerForTransactionOffer:(id)arg1 ;
-(void)_recordLog:(id)arg1 withBuyParams:(id)arg2 ;
-(void)_postTransactionDidStartNotificationWithBuyParams:(id)arg1 ;
-(void)_postSubscriptionNotificationWithChannelName:(id)arg1 buyParams:(id)arg2 error:(id)arg3 ;
-(NSString *)commerceActionRef;
@end

