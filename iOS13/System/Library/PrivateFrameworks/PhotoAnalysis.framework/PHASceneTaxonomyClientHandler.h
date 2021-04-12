/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceTaxonomyProtocol.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>
+(void)initialize;
-(void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)localizedLabelForSceneIdentifier:(unsigned)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperation:(id)arg1 ;
-(id)sceneTaxonomyHash;
@end

