/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DKQuery : NSObject <NSSecureCoding> {

	BOOL _executeConcurrently;

}

@property (assign,nonatomic) BOOL executeConcurrently;              //@synthesize executeConcurrently=_executeConcurrently - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForEventsWithStringValue:(id)arg1 ;
+(id)predicateForEventsWithStreamNames:(id)arg1 ;
+(id)predicateForEventsWithStreamName:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2 ;
+(id)predicateForSpotlightEventsWithBundleID:(id)arg1 ;
+(id)predicateForEventsWithStringValueInValues:(id)arg1 ;
+(id)startDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2 ;
+(id)predicateForEventsWithSourceDeviceIDs:(id)arg1 ;
+(id)predicateForEventsWithNullSourceDeviceID;
+(id)predicateForEventsWithCategoryValue:(id)arg1 ;
+(id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)endDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithMinimumDuration:(double)arg1 ;
+(id)predicateForEventsWithIntegerValue:(long long)arg1 ;
+(id)predicateForEventsWithDoubleValue:(double)arg1 ;
+(id)structuredMetadataKeyPathForMetadataKey:(id)arg1 ;
+(id)predicateForObjectsWithStructuredMetadataKey:(id)arg1 andValue:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 ;
+(id)predicateForEventsWithSourceID:(id)arg1 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 ;
+(id)predicateForEventsWithSourceGroupIDs:(id)arg1 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForEventsWithStartDateAfter:(id)arg1 ;
+(id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg1 ;
+(id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1 ;
+(id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2 ;
+(id)predicateForEventsWithMinumumDuration:(double)arg1 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)localCreationDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2 ;
+(id)predicateForEventsWithIdentifierValue:(id)arg1 ;
+(id)predicateForEventsWithQuantityValue:(id)arg1 ;
+(id)predicateForEventsExcludingIntegerValue:(long long)arg1 ;
+(id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andValue:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 inValues:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 likeStringValue:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3 ;
+(id)predicateForEventsWithSourceDeviceID:(id)arg1 userID:(id)arg2 ;
+(id)predicateForEventsWithNoSource;
+(id)executableQueryForQuery:(id)arg1 ;
+(id)queryNotExecutableError;
+(id)predicateForSpotlightEventsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
+(id)predicateForSpotlightEventsWithItemIdentifiers:(id)arg1 bundleID:(id)arg2 ;
+(id)predicateForSpotlightEventsWithBundleID:(id)arg1 sinceDate:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExecuteConcurrently:(BOOL)arg1 ;
-(BOOL)executeConcurrently;
@end

