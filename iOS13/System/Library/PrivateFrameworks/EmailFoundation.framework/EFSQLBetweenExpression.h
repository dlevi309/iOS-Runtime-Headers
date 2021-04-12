/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFPair.h>
#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLExpressable> {

	BOOL _between;
	id<EFSQLExpressable> _left;

}

@property (nonatomic,readonly) id<EFSQLExpressable> left;                     //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL between;                                  //@synthesize between=_between - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)left;
-(NSString *)ef_SQLExpression;
-(BOOL)between;
-(void)setColumnExpression:(id)arg1 ;
-(id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(BOOL)arg4 ;
@end

