/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFSQLExpressionGenerator.h>

@protocol EFSQLValueExpressable;
@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator {

	id<EFSQLValueExpressable> _bitExpression;

}

@property (nonatomic,readonly) id<EFSQLValueExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
-(id<EFSQLValueExpressable>)bitExpression;
-(void)bitExpressionWithKeyColumn:(id)arg1 ;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4 ;
@end

