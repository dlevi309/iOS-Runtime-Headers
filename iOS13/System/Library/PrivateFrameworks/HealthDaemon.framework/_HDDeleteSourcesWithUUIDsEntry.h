/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)UUIDs;
-(void)setUUIDs:(NSSet *)arg1 ;
-(id)initWithUUIDs:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

