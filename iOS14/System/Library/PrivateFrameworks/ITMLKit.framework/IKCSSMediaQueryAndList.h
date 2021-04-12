/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)evaluate;
-(unsigned long long)count;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(BOOL)negated;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(void)setNegated:(BOOL)arg1 ;
@end

