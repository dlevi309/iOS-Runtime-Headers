/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject {

	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
+(id)sharedContext;
+(void)setSharedContext:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

