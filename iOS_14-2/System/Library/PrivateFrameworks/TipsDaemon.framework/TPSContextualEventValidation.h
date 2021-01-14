/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSTargetingValidation.h>
#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>

@class TPSContextualDuetEvent, NSString;

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate> {

	TPSContextualDuetEvent* _event;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TPSContextualDuetEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(id)completionHandler;
-(TPSContextualDuetEvent *)event;
-(void)setEvent:(TPSContextualDuetEvent *)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
@end

