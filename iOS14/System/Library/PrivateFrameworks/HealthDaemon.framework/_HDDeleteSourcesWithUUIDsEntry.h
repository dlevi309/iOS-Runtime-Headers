/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSSet, NSString;

@interface _HDDeleteSourcesWithUUIDsEntry : HDJournalEntry {

	NSSet* _UUIDs;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSSet * UUIDs;                          //@synthesize UUIDs=_UUIDs - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSSet *)UUIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUIDs:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setUUIDs:(NSSet *)arg1 ;
@end

