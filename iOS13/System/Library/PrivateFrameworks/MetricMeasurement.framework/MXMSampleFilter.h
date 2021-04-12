/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSMutableDictionary;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _tagFilters;
	NSMutableDictionary* _attributetFilters;

}

@property (nonatomic,retain) NSSet * tagFilters;                                   //@synthesize tagFilters=_tagFilters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributetFilters;              //@synthesize attributetFilters=_attributetFilters - In the implementation block
@property (nonatomic,readonly) BOOL finite; 
@property (getter=finite,nonatomic,readonly) BOOL isFinite; 
+(BOOL)supportsSecureCoding;
+(id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2 ;
+(id)filterWithTagFilter:(id)arg1 ;
+(id)filterWithTagFilters:(id)arg1 ;
+(id)filterWithAttributeFilter:(id)arg1 ;
+(id)filterWithAttributeFilters:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributeFilterWithName:(id)arg1 ;
-(BOOL)matchesSamplesWithTag:(id)arg1 ;
-(BOOL)finite;
-(id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2 ;
-(id)initWithTagFilter:(id)arg1 ;
-(id)initWithTagFilters:(id)arg1 ;
-(id)initWithAttributeFilter:(id)arg1 ;
-(id)initWithAttributeFilters:(id)arg1 ;
-(id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2 ;
-(BOOL)matchesSamplesWithAttributes:(id)arg1 ;
-(BOOL)matchesSamplesWithAttribute:(id)arg1 ;
-(NSSet *)tagFilters;
-(NSMutableDictionary *)attributetFilters;
-(BOOL)matchesSample:(id)arg1 ;
-(BOOL)matchesSampleSet:(id)arg1 ;
-(void)setTagFilters:(NSSet *)arg1 ;
-(void)setAttributetFilters:(NSMutableDictionary *)arg1 ;
@end

