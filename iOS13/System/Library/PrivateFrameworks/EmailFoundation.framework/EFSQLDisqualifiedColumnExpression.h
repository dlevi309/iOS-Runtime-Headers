/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFSQLColumnExpression.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@class EFSQLColumnExpression, NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable, EFSQLExpressable> {

	EFSQLColumnExpression* _columnExpression;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression;              //@synthesize columnExpression=_columnExpression - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)ef_SQLExpression;
-(id)cachedSelf;
-(EFSQLColumnExpression *)columnExpression;
@end

