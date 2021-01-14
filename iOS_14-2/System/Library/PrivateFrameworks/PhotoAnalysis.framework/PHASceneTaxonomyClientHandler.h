/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceTaxonomyProtocol.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>
+(void)initialize;
-(void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)localizedLabelForSceneIdentifier:(unsigned)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperation:(id)arg1 ;
-(void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)sceneTaxonomyHash;
-(void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

