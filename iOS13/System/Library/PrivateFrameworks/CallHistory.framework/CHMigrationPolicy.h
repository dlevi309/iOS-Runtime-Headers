/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy {

	NSMutableDictionary* mccToISOCountryCodeMap;
	NSString* lastQueriedISOCountryCode;
	NSString* currentLocale;

}
-(id)init;
-(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
-(id)isoCountryCodeForMCC:(id)arg1 ;
-(id)isoCountryCodeIfAbsent:(id)arg1 ;
@end

