/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSURL, HKMedicalRecord;

@interface HDClinicalContentAnalyticsItem : NSObject {

	NSURL* _sourceURL;
	HKMedicalRecord* _medicalRecord;

}

@property (nonatomic,copy,readonly) NSURL * sourceURL;                       //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) HKMedicalRecord * medicalRecord;              //@synthesize medicalRecord=_medicalRecord - In the implementation block
-(NSURL *)sourceURL;
-(HKMedicalRecord *)medicalRecord;
-(id)initWithSourceURL:(id)arg1 medicalRecord:(id)arg2 ;
@end

