/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, NSArray;

@interface _HKXMLExtractorSpecification : NSObject {

	NSString* _specificationString;
	NSArray* _specificationElements;

}

@property (copy,readonly) NSString * specificationString;               //@synthesize specificationString=_specificationString - In the implementation block
@property (copy,readonly) NSArray * specificationElements;              //@synthesize specificationElements=_specificationElements - In the implementation block
-(id)initWithSpecificationString:(id)arg1 ;
-(BOOL)matchesElementStack:(id)arg1 ;
-(NSString *)specificationString;
-(NSArray *)specificationElements;
@end

