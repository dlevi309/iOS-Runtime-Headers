/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_CDInteractionStore *)interactionStore;
-(void)suspend;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
-(void)deleted;
-(void)recorded:(id)arg1 ;
-(id)initWithInteractionStore:(id)arg1 ;
-(void)resume;
-(void)dealloc;
@end

