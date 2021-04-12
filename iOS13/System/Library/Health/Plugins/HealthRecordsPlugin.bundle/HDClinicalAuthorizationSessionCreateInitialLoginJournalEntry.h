/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionCreateJournalEntry.h>

@class NSString;

@interface HDClinicalAuthorizationSessionCreateInitialLoginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry {

	NSString* _gatewayExternalID;

}

@property (nonatomic,copy,readonly) NSString * gatewayExternalID;              //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)gatewayExternalID;
-(id)initWithState:(id)arg1 queryString:(id)arg2 gatewayExternalID:(id)arg3 ;
@end

