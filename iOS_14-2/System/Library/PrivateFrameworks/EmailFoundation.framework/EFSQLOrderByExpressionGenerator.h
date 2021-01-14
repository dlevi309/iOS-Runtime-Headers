/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject {

	BOOL _ascending;
	NSArray* _generators;

}

@property (nonatomic,readonly) NSArray * generators;              //@synthesize generators=_generators - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                    //@synthesize ascending=_ascending - In the implementation block
-(BOOL)ascending;
-(NSArray *)generators;
-(BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1 ;
-(id)initWithGenerators:(id)arg1 ascending:(BOOL)arg2 ;
-(id)orderByExpression;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

