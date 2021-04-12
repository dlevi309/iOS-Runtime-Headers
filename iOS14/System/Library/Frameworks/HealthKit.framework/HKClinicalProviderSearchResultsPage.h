/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)from;
-(long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)nextFrom;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)searchResults;
-(id)copyWithSearchResults:(id)arg1 ;
-(id)initWithSearchResults:(id)arg1 from:(long long)arg2 nextFrom:(long long)arg3 size:(long long)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

