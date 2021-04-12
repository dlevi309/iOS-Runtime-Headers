/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGSearchableItemIdTriple : NSObject <NSCopying> {

	NSString* _bundleId;
	NSString* _domainId;
	NSString* _uniqueId;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * domainId;              //@synthesize domainId=_domainId - In the implementation block
@property (nonatomic,readonly) NSString * uniqueId;              //@synthesize uniqueId=_uniqueId - In the implementation block
+(id)searchableItemIdTripleWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3 ;
-(id)init;
-(NSString *)bundleId;
-(NSString *)domainId;
-(unsigned long long)hash;
-(NSString *)uniqueId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3 ;
-(BOOL)isEqualToSearchableItemIdTriple:(id)arg1 ;
@end

