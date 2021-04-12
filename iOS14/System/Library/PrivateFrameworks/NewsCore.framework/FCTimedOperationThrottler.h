/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(id<FCOperationThrottlerDelegate>)delegate;
-(BOOL)suspended;
-(double)cooldownTime;
-(void)setDelegate:(id<FCOperationThrottlerDelegate>)arg1 ;
-(void)setOperationThrottler:(FCOperationThrottler *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(FCOperationThrottler *)operationThrottler;
-(void)setCooldownTime:(double)arg1 ;
@end

