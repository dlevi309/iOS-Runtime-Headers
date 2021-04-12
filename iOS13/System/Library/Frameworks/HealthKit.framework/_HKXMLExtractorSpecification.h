/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, NSArray;

@interface _HKXMLExtractorSpecification : NSObject {

	NSString* _specificationString;
	NSArray* _specificationElements;

}

@property (readonly) NSString * specificationString;               //@synthesize specificationString=_specificationString - In the implementation block
@property (readonly) NSArray * specificationElements;              //@synthesize specificationElements=_specificationElements - In the implementation block
-(id)initWithSpecificationString:(id)arg1 ;
-(BOOL)matchesElementStack:(id)arg1 ;
-(NSString *)specificationString;
-(NSArray *)specificationElements;
@end

