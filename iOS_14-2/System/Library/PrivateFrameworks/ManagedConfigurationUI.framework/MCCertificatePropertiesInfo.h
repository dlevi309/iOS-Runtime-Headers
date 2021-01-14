/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
@class NSArray;

@interface MCCertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                 //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;              //@synthesize keyValueSections=_keyValueSections - In the implementation block
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(NSArray *)sectionTitles;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(void)_setup:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
@end

