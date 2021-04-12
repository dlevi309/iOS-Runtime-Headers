/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentSizer.h>

@protocol SXIssueCoverLayoutAttributesFactory;
@interface SXIssueCoverComponentSizer : SXComponentSizer {

	id<SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;              //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
-(id<SXIssueCoverLayoutAttributesFactory>)layoutOptionsFactory;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 layoutOptionsFactory:(id)arg6 ;
@end

