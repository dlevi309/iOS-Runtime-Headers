/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject {

	NSArray* _columnExpressionGenerators;
	NSSet* _tableExpressionGenerators;

}

@property (nonatomic,readonly) NSArray * columnExpressionGenerators;              //@synthesize columnExpressionGenerators=_columnExpressionGenerators - In the implementation block
@property (nonatomic,readonly) NSSet * tableExpressionGenerators;                 //@synthesize tableExpressionGenerators=_tableExpressionGenerators - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)columnExpressionGenerators;
-(BOOL)isEqualToSelectExpressionGenerator:(id)arg1 ;
-(NSSet *)tableExpressionGenerators;
-(id)initExpressionGeneratorWithColumns:(id)arg1 tables:(id)arg2 ;
-(id)selectExpression;
-(id)columnAliases;
@end

