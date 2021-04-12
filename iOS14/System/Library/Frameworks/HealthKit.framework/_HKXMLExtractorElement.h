/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, NSDictionary;

@interface _HKXMLExtractorElement : NSObject {

	NSString* _specificationElement;
	NSDictionary* _specificationAttributes;

}

@property (copy,readonly) NSString * specificationElement;                     //@synthesize specificationElement=_specificationElement - In the implementation block
@property (copy,readonly) NSDictionary * specificationAttributes;              //@synthesize specificationAttributes=_specificationAttributes - In the implementation block
-(id)initWithElementName:(id)arg1 attributes:(id)arg2 ;
-(NSString *)specificationElement;
-(NSDictionary *)specificationAttributes;
-(id)initWithTagSpecification:(id)arg1 ;
-(BOOL)matchesElement:(id)arg1 ;
@end

