/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSString, HDCodableObjectCollection, NSArray;

@interface HDClinicalRecordJournalEntry : HDJournalEntry {

	NSString* _gatewayExternalID;
	HDCodableObjectCollection* _codableRecordCollection;
	NSArray* _obsoleteResourceIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * gatewayExternalID;                                     //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
@property (nonatomic,copy,readonly) HDCodableObjectCollection * codableRecordCollection;              //@synthesize codableRecordCollection=_codableRecordCollection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * obsoleteResourceIdentifiers;                            //@synthesize obsoleteResourceIdentifiers=_obsoleteResourceIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)gatewayExternalID;
-(HDCodableObjectCollection *)codableRecordCollection;
-(NSArray *)obsoleteResourceIdentifiers;
-(id)initWithGatewayExternalID:(id)arg1 codableRecordCollection:(id)arg2 obsoleteResourceIdentifiers:(id)arg3 ;
@end

