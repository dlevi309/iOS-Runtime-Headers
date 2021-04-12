/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableIndexSet;

@interface PXUpdater : NSObject {

	SEL* _orderedUpdateSelectors;
	unsigned long long _orderedUpdateSelectorsCapacity;
	unsigned long long _orderedUpdateSelectorsCount;
	NSMutableIndexSet* _updateSelectorsNeedingUpdate;
	NSMutableIndexSet* _updateSelectorsAlreadyUpdated;
	BOOL _isPerformingUpdates;
	BOOL _updatePassScheduled;
	BOOL _extraChecksEnabled;
	id _target;
	SEL _needsUpdateSelector;

}

@property (assign,getter=isUpdatePassScheduled,nonatomic) BOOL updatePassScheduled;              //@synthesize updatePassScheduled=_updatePassScheduled - In the implementation block
@property (assign,nonatomic) BOOL extraChecksEnabled;                                            //@synthesize extraChecksEnabled=_extraChecksEnabled - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL needsUpdateSelector;                                            //@synthesize needsUpdateSelector=_needsUpdateSelector - In the implementation block
-(void)addUpdateSelector:(SEL)arg1 needsUpdate:(BOOL)arg2 ;
-(id)init;
-(SEL)needsUpdateSelector;
-(BOOL)isUpdatePassScheduled;
-(id)initWithTarget:(id)arg1 ;
-(void)setExtraChecksEnabled:(BOOL)arg1 ;
-(void)setNeedsUpdateOf:(SEL)arg1 ;
-(void)updateIfNeeded;
-(id)initWithTarget:(id)arg1 needsUpdateSelector:(SEL)arg2 ;
-(void)setNeedsUpdateSelector:(SEL)arg1 ;
-(void)setUpdatePassScheduled:(BOOL)arg1 ;
-(id)target;
-(BOOL)extraChecksEnabled;
-(void)addUpdateSelector:(SEL)arg1 ;
-(void)_scheduleUpdatePassIfNeeded;
-(void)dealloc;
@end

