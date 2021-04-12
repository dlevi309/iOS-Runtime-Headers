/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSString, NSArray;

@interface CNVCardParsedParameter : NSObject {

	NSString* _name;
	NSArray* _values;

}

@property (copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)parameterWithName:(id)arg1 values:(id)arg2 ;
-(NSArray *)values;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end

