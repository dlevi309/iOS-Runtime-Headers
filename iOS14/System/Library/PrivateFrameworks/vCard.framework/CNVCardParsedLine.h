/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject {

	NSString* _name;
	id _value;
	NSArray* _parameters;
	NSString* _grouping;
	BOOL _isPrimary;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (retain) id value;                            //@synthesize value=_value - In the implementation block
@property (copy) NSArray * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (assign) BOOL isPrimary;                      //@synthesize isPrimary=_isPrimary - In the implementation block
@property (copy) NSString * grouping;                   //@synthesize grouping=_grouping - In the implementation block
-(BOOL)isPrimary;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(NSString *)grouping;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setGrouping:(NSString *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)value;
@end

