/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionJournalEntry.h>

@class NSString;

@interface HDClinicalAuthorizationSessionCreateJournalEntry : HDClinicalAuthorizationSessionJournalEntry {

	NSString* _queryString;

}

@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithState:(id)arg1 queryString:(id)arg2 ;
@end

