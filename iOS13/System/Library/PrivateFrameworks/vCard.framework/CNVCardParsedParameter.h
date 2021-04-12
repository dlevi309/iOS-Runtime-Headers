/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(NSArray *)values;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end

