/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/WDMedicalRecordSummaryDelegate.h>

@protocol WDMedicalRecordDaySummaryDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, HRProfile, NSObject, NSString;

@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate> {

	NSMutableDictionary* _categoriesBySourceAlphaOrdered;
	NSMutableDictionary* _categoriesBySourceByType;
	NSMutableSet* _inProgressCatogorySummaries;
	id<WDMedicalRecordDaySummaryDelegate> _delegate;
	HRProfile* _profile;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	long long _style;

}

@property (nonatomic,retain) NSMutableDictionary * categoriesBySourceAlphaOrdered;               //@synthesize categoriesBySourceAlphaOrdered=_categoriesBySourceAlphaOrdered - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * categoriesBySourceByType;                     //@synthesize categoriesBySourceByType=_categoriesBySourceByType - In the implementation block
@property (nonatomic,retain) NSMutableSet * inProgressCatogorySummaries;                         //@synthesize inProgressCatogorySummaries=_inProgressCatogorySummaries - In the implementation block
@property (assign,nonatomic,__weak) id<WDMedicalRecordDaySummaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HRProfile * profile;                                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                         //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long numberOfDisplayItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HRProfile *)arg1 ;
-(NSMutableDictionary *)categoriesBySourceByType;
-(id)_alphaSortedCategories:(id)arg1 ;
-(id<WDMedicalRecordDaySummaryDelegate>)delegate;
-(NSMutableDictionary *)categoriesBySourceAlphaOrdered;
-(NSMutableSet *)inProgressCatogorySummaries;
-(void)addMedicalRecord:(id)arg1 ;
-(void)recomputeIfNeeded;
-(id)_alphaSortedKeysForCategories:(id)arg1 ;
-(void)summaryDidFinishRecompute:(id)arg1 ;
-(id)initWithProfile:(id)arg1 style:(long long)arg2 delegate:(id)arg3 ;
-(void)setCategoriesBySourceAlphaOrdered:(NSMutableDictionary *)arg1 ;
-(void)setCategoriesBySourceByType:(NSMutableDictionary *)arg1 ;
-(void)setInProgressCatogorySummaries:(NSMutableSet *)arg1 ;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<WDMedicalRecordDaySummaryDelegate>)arg1 ;
-(HRProfile *)profile;
-(void)setStyle:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(id)displayItemAtIndex:(long long)arg1 ;
-(long long)numberOfDisplayItems;
-(long long)style;
@end

