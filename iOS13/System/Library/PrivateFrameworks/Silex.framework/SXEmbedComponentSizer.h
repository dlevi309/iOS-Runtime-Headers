/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@protocol SXEmbedService;
@interface SXEmbedComponentSizer : SXComponentSizer {

	id<SXEmbedService> _embedService;

}

@property (nonatomic,readonly) id<SXEmbedService> embedService;              //@synthesize embedService=_embedService - In the implementation block
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(id<SXEmbedService>)embedService;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 embedService:(id)arg6 ;
@end

