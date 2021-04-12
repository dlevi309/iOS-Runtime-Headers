/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottlerDelegate;
@class FCOperationThrottler, NSString;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler> {

	double _cooldownTime;
	FCOperationThrottler* _operationThrottler;
	id<FCOperationThrottlerDelegate> _delegate;

}

@property (nonatomic,retain) FCOperationThrottler * operationThrottler;                     //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<FCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double cooldownTime;                                                     //@synthesize cooldownTime=_cooldownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL suspended; 
-(id)init;
-(id<FCOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<FCOperationThrottlerDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(FCOperationThrottler *)operationThrottler;
-(double)cooldownTime;
-(void)setCooldownTime:(double)arg1 ;
-(void)setOperationThrottler:(FCOperationThrottler *)arg1 ;
@end

