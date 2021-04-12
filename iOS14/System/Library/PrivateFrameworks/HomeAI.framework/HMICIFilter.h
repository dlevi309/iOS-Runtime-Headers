/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMICIFilter : HMFObject {

	NSString* _name;
	double _probability;
	NSArray* _attributes;

}

@property (readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (readonly) double probability;                //@synthesize probability=_probability - In the implementation block
@property (readonly) NSArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)attributeForKey:(id)arg1 ;
-(double)probability;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSArray *)attributes;
-(id)expectedAttributeForKey:(id)arg1 ;
-(id)applyToImage:(id)arg1 withProbability:(double)arg2 ;
@end

