/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUQuickControlContentCharacteristicWritingDelegate.h>

@protocol HUQuickControlContentCharacteristicWritingDelegate;
@class HFItemManager, _HUQuickControlContentCharacteristicWriteQueuedUpdate, NSString;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate> {

	BOOL _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
	id<HUQuickControlContentCharacteristicWritingDelegate> _forwardingCharacteristicWritingDelegate;
	HFItemManager* _itemManager;
	_HUQuickControlContentCharacteristicWriteQueuedUpdate* _queuedUpdate;

}

@property (nonatomic,retain) _HUQuickControlContentCharacteristicWriteQueuedUpdate * queuedUpdate;                                               //@synthesize queuedUpdate=_queuedUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate;              //@synthesize forwardingCharacteristicWritingDelegate=_forwardingCharacteristicWritingDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;                                                    //@synthesize shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges=_shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges - In the implementation block
@property (nonatomic,readonly) HFItemManager * itemManager;                                                                                      //@synthesize itemManager=_itemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItemManager *)itemManager;
-(void)dealloc;
-(id)initWithItemManager:(id)arg1 ;
-(void)setShouldIssueItemUpdatesOnCharacteristicOverrideValueChanges:(BOOL)arg1 ;
-(void)setForwardingCharacteristicWritingDelegate:(id<HUQuickControlContentCharacteristicWritingDelegate>)arg1 ;
-(void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2 ;
-(void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2 ;
-(void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1 ;
-(_HUQuickControlContentCharacteristicWriteQueuedUpdate *)queuedUpdate;
-(void)setQueuedUpdate:(_HUQuickControlContentCharacteristicWriteQueuedUpdate *)arg1 ;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)forwardingCharacteristicWritingDelegate;
-(BOOL)shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
-(void)_executeQueuedUpdate;
-(id)_characteristicUpdateSuppressionReasonForContent:(id)arg1 ;
@end

