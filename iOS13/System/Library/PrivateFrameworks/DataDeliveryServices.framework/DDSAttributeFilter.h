/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding> {

	NSMutableDictionary* _filters;

}

@property (nonatomic,retain) NSMutableDictionary * filters;              //@synthesize filters=_filters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributeFilter;
+(id)attributeFilterWithDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)filters;
-(void)setFilters:(NSMutableDictionary *)arg1 ;
-(void)addAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(id)_setForKey:(id)arg1 ;
-(void)addAllowedValues:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateAllowedValuesAndKeys:(/*^block*/id)arg1 ;
-(id)allowedValuesForKey:(id)arg1 ;
-(BOOL)isEqualToQueryFilter:(id)arg1 ;
-(void)addEntriesFromFilter:(id)arg1 ;
-(id)entriesMatchingAttributes:(id)arg1 ;
-(BOOL)doesContainAttributes:(id)arg1 ;
-(void)removeAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllowedValues:(id)arg1 forKey:(id)arg2 ;
@end

