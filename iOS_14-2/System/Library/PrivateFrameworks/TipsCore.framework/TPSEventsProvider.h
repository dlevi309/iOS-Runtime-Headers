/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol TPSEventsProviderDelegate;
@interface TPSEventsProvider : NSObject {

	id<TPSEventsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TPSEventsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)registerEventsForCallback:(id)arg1 ;
-(void)queryEvents:(id)arg1 ;
-(id<TPSEventsProviderDelegate>)delegate;
-(void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)setDelegate:(id<TPSEventsProviderDelegate>)arg1 ;
-(void)deregisterEventsForCallback:(id)arg1 ;
@end

