/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKViewController.h>

@class HKMedicalRecord, HRProfile, UITextView, UIBarButtonItem;

@interface WDMedicalRecordSourceDataViewController : HKViewController {

	BOOL _hasFetchedSourceString;
	HKMedicalRecord* _medicalRecord;
	HRProfile* _profile;
	UITextView* _sourceView;
	UIBarButtonItem* _shareItem;

}

@property (nonatomic,copy,readonly) HKMedicalRecord * medicalRecord;              //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) HRProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) UITextView * sourceView;                           //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedSourceString;                         //@synthesize hasFetchedSourceString=_hasFetchedSourceString - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareItem;                         //@synthesize shareItem=_shareItem - In the implementation block
-(HRProfile *)profile;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UITextView *)sourceView;
-(void)_tapToRadar:(id)arg1 ;
-(void)share:(id)arg1 ;
-(HKMedicalRecord *)medicalRecord;
-(UIBarButtonItem *)shareItem;
-(void)setShareItem:(UIBarButtonItem *)arg1 ;
-(id)initWithProfile:(id)arg1 medicalRecord:(id)arg2 ;
-(void)_fetchAndDisplaySourceStringIfNecessary;
-(BOOL)hasFetchedSourceString;
-(void)setHasFetchedSourceString:(BOOL)arg1 ;
-(void)displaySourceString:(id)arg1 ;
@end

