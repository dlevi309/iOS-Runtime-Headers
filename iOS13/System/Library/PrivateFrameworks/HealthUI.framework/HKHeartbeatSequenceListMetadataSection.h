/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKHeartbeatSequenceListMetadataSectionDelegate;
@class HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController, NSArray;

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection {

	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	id<HKHeartbeatSequenceListMetadataSectionDelegate> _delegate;
	NSArray* _sequencesSamples;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;                                 //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                                     //@synthesize unitController=_unitController - In the implementation block
@property (assign,nonatomic,__weak) id<HKHeartbeatSequenceListMetadataSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * sequencesSamples;                                                      //@synthesize sequencesSamples=_sequencesSamples - In the implementation block
-(id<HKHeartbeatSequenceListMetadataSectionDelegate>)delegate;
-(void)setDelegate:(id<HKHeartbeatSequenceListMetadataSectionDelegate>)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayTypeController *)displayTypeController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(void)_startAssociatedSequenceQueryForEvent:(id)arg1 ;
-(void)setSequencesSamples:(NSArray *)arg1 ;
-(NSArray *)sequencesSamples;
@end

