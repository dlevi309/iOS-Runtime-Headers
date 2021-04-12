/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionJournalEntry.h>

@class NSString;

@interface HDClinicalAuthorizationSessionCreateJournalEntry : HDClinicalAuthorizationSessionJournalEntry {

	NSString* _queryString;

}

@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)queryString;
-(id)initWithState:(id)arg1 queryString:(id)arg2 ;
@end

