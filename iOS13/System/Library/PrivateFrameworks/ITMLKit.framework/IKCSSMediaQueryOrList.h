/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	IKMutableArray* _queryList;

}
-(id)init;
-(id)description;
-(unsigned long long)count;
-(BOOL)evaluate;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
@end

