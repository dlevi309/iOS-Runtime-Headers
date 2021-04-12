/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol AMSBagProtocol;
@class NSString;

@interface AMSUIPaymentVerificationMetrics : NSObject {

	id<AMSBagProtocol> _bag;
	NSString* _displayReason;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * displayReason;              //@synthesize displayReason=_displayReason - In the implementation block
+(id)_event;
+(id)_metricsInstanceWithBag:(id)arg1 ;
-(void)flushEvents;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setDisplayReason:(NSString *)arg1 ;
-(void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(NSString *)displayReason;
@end

