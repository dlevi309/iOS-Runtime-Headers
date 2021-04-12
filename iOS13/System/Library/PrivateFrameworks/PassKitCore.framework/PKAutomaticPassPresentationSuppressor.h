/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)requestSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)endSuppressionWithRequestToken:(unsigned long long)arg1 ;
-(BOOL)isSuppressing;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireSuppressionAssertionWithCompletion:(/*^block*/id)arg1 ;
@end

