/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HKClinicalProviderSearchResultsPage : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _searchResults;
	long long _from;
	long long _nextFrom;
	long long _size;

}

@property (nonatomic,copy,readonly) NSArray * searchResults;              //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) long long from;                            //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) long long nextFrom;                        //@synthesize nextFrom=_nextFrom - In the implementation block
@property (nonatomic,readonly) long long size;                            //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)size;
-(long long)from;
-(NSArray *)searchResults;
-(id)initWithSearchResults:(id)arg1 from:(long long)arg2 nextFrom:(long long)arg3 size:(long long)arg4 ;
-(long long)nextFrom;
-(id)copyWithSearchResults:(id)arg1 ;
@end

