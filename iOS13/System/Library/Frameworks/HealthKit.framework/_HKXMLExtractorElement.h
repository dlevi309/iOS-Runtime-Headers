/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, NSDictionary;

@interface _HKXMLExtractorElement : NSObject {

	NSString* _specificationElement;
	NSDictionary* _specificationAttributes;

}

@property (readonly) NSString * specificationElement;                     //@synthesize specificationElement=_specificationElement - In the implementation block
@property (readonly) NSDictionary * specificationAttributes;              //@synthesize specificationAttributes=_specificationAttributes - In the implementation block
-(id)initWithElementName:(id)arg1 attributes:(id)arg2 ;
-(NSString *)specificationElement;
-(NSDictionary *)specificationAttributes;
-(id)initWithTagSpecification:(id)arg1 ;
-(BOOL)matchesElement:(id)arg1 ;
@end

