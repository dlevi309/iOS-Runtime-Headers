/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mediaQuery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)queryRange;
-(void)setQueryRange:(NSRange)arg1 ;
-(id)initWithMediaQuery:(id)arg1 ;
@end

