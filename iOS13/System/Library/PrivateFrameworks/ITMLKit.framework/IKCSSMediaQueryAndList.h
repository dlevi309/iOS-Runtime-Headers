/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {

	IKMutableArray* _queryList;
	BOOL _negated;
	NSString* _type;

}

@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL negated;                           //@synthesize negated=_negated - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(BOOL)evaluate;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(BOOL)negated;
-(void)setNegated:(BOOL)arg1 ;
@end

