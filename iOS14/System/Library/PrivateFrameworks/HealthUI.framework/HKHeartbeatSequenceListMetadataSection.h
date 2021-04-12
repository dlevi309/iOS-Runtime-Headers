/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKHealthStore *)healthStore;
-(HKUnitPreferenceController *)unitController;
-(id)sectionTitle;
-(id<HKHeartbeatSequenceListMetadataSectionDelegate>)delegate;
-(void)setDelegate:(id<HKHeartbeatSequenceListMetadataSectionDelegate>)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_startAssociatedSequenceQueryForEvent:(id)arg1 ;
-(void)setSequencesSamples:(NSArray *)arg1 ;
-(NSArray *)sequencesSamples;
-(id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5 ;
@end

