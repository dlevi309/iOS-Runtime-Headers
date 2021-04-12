/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject {

	BOOL _includeSourceColumn;
	EFSQLGeneratorTableRelationship* _tableRelationship;
	NSArray* _whereExpression;
	NSArray* _additionalSelectColumns;
	NSString* _alias;
	EFSQLExpressionGenerator* _previousExpressionGenerator;

}

@property (nonatomic,readonly) EFSQLGeneratorTableRelationship * tableRelationship;                 //@synthesize tableRelationship=_tableRelationship - In the implementation block
@property (nonatomic,readonly) NSArray * whereExpression;                                           //@synthesize whereExpression=_whereExpression - In the implementation block
@property (nonatomic,readonly) NSArray * additionalSelectColumns;                                   //@synthesize additionalSelectColumns=_additionalSelectColumns - In the implementation block
@property (assign,nonatomic) BOOL includeSourceColumn;                                              //@synthesize includeSourceColumn=_includeSourceColumn - In the implementation block
@property (nonatomic,copy) NSString * alias;                                                        //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) EFSQLExpressionGenerator * previousExpressionGenerator;              //@synthesize previousExpressionGenerator=_previousExpressionGenerator - In the implementation block
+(id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(BOOL)arg5 ;
-(EFSQLGeneratorTableRelationship *)tableRelationship;
-(EFSQLExpressionGenerator *)previousExpressionGenerator;
-(BOOL)isEqualToEFSQLExpressionGenerator:(id)arg1 ;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 ;
-(void)assignAliasWithMap:(id)arg1 ;
-(id)joinOnGenerator;
-(id)columnAlias;
-(NSArray *)whereExpression;
-(NSArray *)additionalSelectColumns;
-(BOOL)includeSourceColumn;
-(void)setIncludeSourceColumn:(BOOL)arg1 ;
@end

