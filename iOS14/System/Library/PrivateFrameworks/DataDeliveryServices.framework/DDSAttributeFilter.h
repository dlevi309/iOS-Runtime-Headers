/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding> {

	NSMutableDictionary* _filters;

}

@property (nonatomic,retain) NSMutableDictionary * filters;              //@synthesize filters=_filters - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)hashObject:(id)arg1 ;
+(unsigned long long)hashSet:(id)arg1 ;
+(unsigned long long)hashDictionary:(id)arg1 ;
+(id)attributeFilter;
+(id)attributeFilterWithDictionary:(id)arg1 ;
-(BOOL)isEqualToQueryFilter:(id)arg1 ;
-(void)addAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateAllowedValuesAndKeys:(/*^block*/id)arg1 ;
-(void)setFilters:(NSMutableDictionary *)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(id)allowedValuesForKey:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)filters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)entriesMatchingAttributes:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addAllowedValues:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(void)removeAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)addEntriesFromFilter:(id)arg1 ;
-(BOOL)doesContainAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeAllowedValues:(id)arg1 forKey:(id)arg2 ;
@end

