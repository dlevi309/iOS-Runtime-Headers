/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMICIFilterAttributeValue;

@interface HMICIFilterAttribute : HMFObject {

	NSString* _name;
	NSString* _type;
	HMICIFilterAttributeValue* _value;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (readonly) HMICIFilterAttributeValue * value;              //@synthesize value=_value - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(HMICIFilterAttributeValue *)value;
@end

