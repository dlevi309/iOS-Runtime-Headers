/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFSQLExpressionGenerator.h>

@protocol EFSQLExpressable;
@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator {

	id<EFSQLExpressable> _bitExpression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
-(id<EFSQLExpressable>)bitExpression;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4 ;
-(void)bitExpressionWithKeyColumn:(id)arg1 ;
@end

