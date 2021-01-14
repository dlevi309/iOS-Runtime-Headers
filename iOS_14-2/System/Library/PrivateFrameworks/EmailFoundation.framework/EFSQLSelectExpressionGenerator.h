/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject {

	NSArray* _columnExpressionGenerators;
	NSSet* _tableExpressionGenerators;

}

@property (nonatomic,readonly) NSArray * columnExpressionGenerators;              //@synthesize columnExpressionGenerators=_columnExpressionGenerators - In the implementation block
@property (nonatomic,readonly) NSSet * tableExpressionGenerators;                 //@synthesize tableExpressionGenerators=_tableExpressionGenerators - In the implementation block
-(NSArray *)columnExpressionGenerators;
-(BOOL)isEqualToSelectExpressionGenerator:(id)arg1 ;
-(NSSet *)tableExpressionGenerators;
-(id)initExpressionGeneratorWithColumns:(id)arg1 tables:(id)arg2 ;
-(id)selectExpression;
-(id)columnAliases;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

