/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNPending.h>

@protocol BNPresentableQueueDelegate;
@class NSString, NSSet, NSMutableArray, NSMapTable, BNSuspensionController;

@interface BNPresentableQueue : NSObject <BNPending> {

	NSMutableArray* _postingContextQueue;
	NSMapTable* _postingContextsToDequeuePromises;
	BNSuspensionController* _suspensionController;
	NSString* _penderIdentifier;
	id<BNPresentableQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BNPresentableQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * penderIdentifier;                                   //@synthesize penderIdentifier=_penderIdentifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)isSuspended;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(id<BNPresentableQueueDelegate>)delegate;
-(void)setDelegate:(id<BNPresentableQueueDelegate>)arg1 ;
-(NSSet *)activeSuspensionReasons;
-(id)peekPresentable;
-(NSString *)penderIdentifier;
-(id)pullPresentablesWithIdentification:(id)arg1 ;
-(void)setPenderIdentifier:(NSString *)arg1 ;
-(void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)_pullPresentablesPassingTest:(/*^block*/id)arg1 ;
@end

