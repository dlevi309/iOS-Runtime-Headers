/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIAutoLoopAnalysisResult.h>

@class NSDictionary, NSString;

@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult> {

	NSDictionary* _recipe;

}

@property (retain) NSDictionary * recipe;                            //@synthesize recipe=_recipe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
@end

