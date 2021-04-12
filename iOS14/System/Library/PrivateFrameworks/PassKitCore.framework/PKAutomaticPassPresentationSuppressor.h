/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class PKAssertion, NSMutableIndexSet, NSDate, NSObject;

@interface PKAutomaticPassPresentationSuppressor : NSObject {

	PKAssertion* _suppressionAssertion;
	NSMutableIndexSet* _suppressionRequestTokens;
	NSMutableIndexSet* _backgrounedSuppressionIdentifiers;
	NSDate* _backgroundedDate;
	unsigned long long _nextRequestToken;
	NSObject*<OS_dispatch_queue> _suppressorQueue;

}

@property (nonatomic,readonly) BOOL isSuppressing; 
+(id)sharedInstance;
-(id)init;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)requestSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)isSuppressing;
-(void)endSuppressionWithRequestToken:(unsigned long long)arg1 ;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireSuppressionAssertionWithCompletion:(/*^block*/id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
@end

