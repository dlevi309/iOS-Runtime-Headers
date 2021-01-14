/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFSQLColumnExpression.h>
#import <libobjc.A.dylib/EFCacheable.h>

@class EFSQLColumnExpression, NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable> {

	EFSQLColumnExpression* _columnExpression;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression;              //@synthesize columnExpression=_columnExpression - In the implementation block
-(id)cachedSelf;
-(EFSQLColumnExpression *)columnExpression;
-(unsigned long long)hash;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

