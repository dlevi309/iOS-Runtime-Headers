/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUAvailableTriggerItem, NAFuture;

@interface HUAvailableTriggerItemActivationRequest : NSObject {

	BOOL _active;
	HUAvailableTriggerItem* _item;
	NAFuture* _completionFuture;

}

@property (assign,nonatomic,__weak) HUAvailableTriggerItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NAFuture * completionFuture;                       //@synthesize completionFuture=_completionFuture - In the implementation block
@property (assign,nonatomic) BOOL active;                                       //@synthesize active=_active - In the implementation block
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(HUAvailableTriggerItem *)item;
-(void)setItem:(HUAvailableTriggerItem *)arg1 ;
-(NAFuture *)completionFuture;
-(void)setCompletionFuture:(NAFuture *)arg1 ;
-(id)initWithItem:(id)arg1 active:(BOOL)arg2 ;
-(BOOL)isSameAsRequest:(id)arg1 ;
@end

