/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIAutoLoopAnalysisResult.h>

@class NSDictionary, NSString;

@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult> {

	NSDictionary* _recipe;

}

@property (retain) NSDictionary * recipe;                            //@synthesize recipe=_recipe - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
@end

