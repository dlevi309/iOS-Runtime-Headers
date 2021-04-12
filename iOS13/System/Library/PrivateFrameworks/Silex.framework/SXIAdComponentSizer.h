/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@class SXAdController;

@interface SXIAdComponentSizer : SXComponentSizer {

	SXAdController* _adController;

}

@property (nonatomic,readonly) SXAdController * adController;              //@synthesize adController=_adController - In the implementation block
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(SXAdController *)adController;
-(unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1 ;
-(unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 adController:(id)arg6 ;
@end

