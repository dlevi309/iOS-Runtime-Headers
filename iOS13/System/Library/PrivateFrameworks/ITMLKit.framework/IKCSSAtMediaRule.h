/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSRule.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {

	IKCSSMediaQuery* _mediaQuery;
	NSRange _queryRange;

}

@property (assign,nonatomic) NSRange queryRange;              //@synthesize queryRange=_queryRange - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mediaQuery;
-(NSRange)queryRange;
-(void)setQueryRange:(NSRange)arg1 ;
-(id)initWithMediaQuery:(id)arg1 ;
@end

