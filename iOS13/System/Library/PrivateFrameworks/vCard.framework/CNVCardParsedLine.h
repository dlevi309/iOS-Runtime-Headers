/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(BOOL)isPrimary;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)grouping;
-(void)setIsPrimary:(BOOL)arg1 ;
@end

