/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@protocol SXEmbedDataProvider;
@interface SXEmbedComponentSizer : SXComponentSizer {

	id<SXEmbedDataProvider> _embedDataProvider;

}

@property (nonatomic,readonly) id<SXEmbedDataProvider> embedDataProvider;              //@synthesize embedDataProvider=_embedDataProvider - In the implementation block
-(id<SXEmbedDataProvider>)embedDataProvider;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 embedDataProvider:(id)arg6 ;
@end

