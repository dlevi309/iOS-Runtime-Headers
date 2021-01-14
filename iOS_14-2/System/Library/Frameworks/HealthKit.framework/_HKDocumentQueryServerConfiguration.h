/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDocumentData;
	NSArray* _sortDescriptors;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSArray * sortDescriptors;               //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDocumentData;              //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setIncludeDocumentData:(BOOL)arg1 ;
-(BOOL)includeDocumentData;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

