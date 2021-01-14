/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	IKMutableArray* _queryList;

}
-(id)init;
-(BOOL)evaluate;
-(unsigned long long)count;
-(id)description;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
@end

