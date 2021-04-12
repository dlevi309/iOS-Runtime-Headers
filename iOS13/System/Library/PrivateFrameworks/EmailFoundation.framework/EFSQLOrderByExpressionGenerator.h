/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject {

	BOOL _ascending;
	NSArray* _generators;

}

@property (nonatomic,readonly) NSArray * generators;              //@synthesize generators=_generators - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                    //@synthesize ascending=_ascending - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)ascending;
-(NSArray *)generators;
-(BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1 ;
-(id)initWithGenerators:(id)arg1 ascending:(BOOL)arg2 ;
-(id)orderByExpression;
@end

