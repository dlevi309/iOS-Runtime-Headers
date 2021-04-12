/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGContextualRule.h>

@class NSString;

@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg1 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_contextualKeyAssetForDayHighlightItem:(id)arg1 contextualLocalDate:(id)arg2 ;
@end

