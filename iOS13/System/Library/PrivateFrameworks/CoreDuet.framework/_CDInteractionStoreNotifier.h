/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSObject, _CDInteractionStore;

@interface _CDInteractionStoreNotifier : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;
	_CDInteractionStore* _interactionStore;

}

@property (nonatomic,__weak,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(void)dealloc;
-(_CDInteractionStore *)interactionStore;
-(id)initWithInteractionStore:(id)arg1 ;
-(void)recorded:(id)arg1 ;
-(void)deleted;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
@end

