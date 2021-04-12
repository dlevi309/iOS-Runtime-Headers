/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class HKCDADocumentSample, HKHealthStore, NSData, HKCDAPDFGenerator, NSURL;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider {

	HKCDADocumentSample* _documentSample;
	HKHealthStore* _healthStore;
	NSData* _shareData;
	HKCDAPDFGenerator* _generator;
	NSURL* _exportArchiveURL;

}

@property (nonatomic,readonly) HKCDADocumentSample * documentSample;              //@synthesize documentSample=_documentSample - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSData * shareData;                                //@synthesize shareData=_shareData - In the implementation block
@property (nonatomic,readonly) HKCDAPDFGenerator * generator;                     //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) NSURL * exportArchiveURL;                          //@synthesize exportArchiveURL=_exportArchiveURL - In the implementation block
-(void)dealloc;
-(id)item;
-(HKHealthStore *)healthStore;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(HKCDAPDFGenerator *)generator;
-(id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2 ;
-(id)_simpleError:(id)arg1 ;
-(void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generatePDFforCDA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadShareDataWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKCDADocumentSample *)documentSample;
-(NSData *)shareData;
-(NSURL *)exportArchiveURL;
@end

