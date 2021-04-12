/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@protocol OS_dispatch_group;
@class NFUnfairLock, NSObject, NSError, FCForYouCatchUpCondition, NSString;

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling> {

	NFUnfairLock* _lock;
	NSObject*<OS_dispatch_group> _group;
	BOOL _finished;
	NSError* _error;
	FCForYouCatchUpCondition* _condition;

}

@property (nonatomic,retain) FCForYouCatchUpCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCondition:(FCForYouCatchUpCondition *)arg1 ;
-(id)init;
-(void)_possiblyFinishWithError:(id)arg1 ;
-(FCForYouCatchUpCondition *)condition;
-(void)cancel;
-(void)signalWithError:(id)arg1 ;
-(void)notifyWithCompletion:(/*^block*/id)arg1 ;
@end

