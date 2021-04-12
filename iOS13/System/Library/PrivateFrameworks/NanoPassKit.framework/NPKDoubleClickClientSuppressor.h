/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NPKAssertion, NSMutableIndexSet, NSObject;

@interface NPKDoubleClickClientSuppressor : NSObject {

	NPKAssertion* _suppressionAssertion;
	NSMutableIndexSet* _suppressionRequestTokens;
	unsigned long long _nextSuppressionRequestToken;
	NSObject*<OS_dispatch_queue> _suppressorQueue;

}

@property (nonatomic,retain) NPKAssertion * suppressionAssertion;                         //@synthesize suppressionAssertion=_suppressionAssertion - In the implementation block
@property (retain) NSMutableIndexSet * suppressionRequestTokens;                          //@synthesize suppressionRequestTokens=_suppressionRequestTokens - In the implementation block
@property (assign,nonatomic) unsigned long long nextSuppressionRequestToken;              //@synthesize nextSuppressionRequestToken=_nextSuppressionRequestToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> suppressorQueue;                //@synthesize suppressorQueue=_suppressorQueue - In the implementation block
+(id)sharedInstance;
+(unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
+(void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1 ;
+(BOOL)isSuppressingDoubleClickClients;
-(id)init;
-(void)dealloc;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireSuppressionAssertionWithCompletion:(/*^block*/id)arg1 ;
-(NPKAssertion *)suppressionAssertion;
-(unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1 ;
-(BOOL)isSuppressingDoubleClickClients;
-(NSObject*<OS_dispatch_queue>)suppressorQueue;
-(unsigned long long)nextSuppressionRequestToken;
-(void)setNextSuppressionRequestToken:(unsigned long long)arg1 ;
-(void)_postSuppressionStateChanged;
-(NSMutableIndexSet *)suppressionRequestTokens;
-(void)setSuppressionAssertion:(NPKAssertion *)arg1 ;
-(void)setSuppressionRequestTokens:(NSMutableIndexSet *)arg1 ;
-(void)setSuppressorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

